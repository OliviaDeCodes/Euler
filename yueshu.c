/*************************************************************************
	> File Name: yueshu.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  1/13 10:53:09 2019
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#include <math.h>
#define MAX_N 15

int64_t prime[MAX_N + 5] = {0};
int64_t pnum[MAX_N + 5] = {0};
int64_t fnum[MAX_N + 5] = {0};
int64_t dnum[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            pnum[i] = 1;
            fnum[i] = 2;
            dnum[i] = i + 1;
        }
        for (int j = 1; j <= prime[0] && prime[j] * i <= MAX_N; j++) {
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) {
                pnum[prime[j] * i] = pnum[i] + 1;
                fnum[prime[j] * i] = fnum[i] / (pnum[i] + 1) * (pnum[i] + 2); 
                dnum[prime[j] * i] = dnum[i] / (pow(prime[j], pnum[i] + 1) - 1) * (pow(prime[j], pnum[i] + 2) - 1);
            } else {
                pnum[prime[j] * i] = 1;
                fnum[prime[j] * i] = fnum[prime[j]] * fnum[i];
                dnum[prime[j] * i] = dnum[prime[j]] * dnum[i];
            }
        }
    }
    /*for (int i = 1; i <= MAX_N; i++) {
            dnum -= i;
    }*/
    return ;
}

int main() {
    init();
    int64_t num = 0;
    for (int i = 1; i <= MAX_N ; i++) {
        if (num < fnum[i]) {
            num = fnum[i];
        }
    }
    printf("%"PRId64"\n", fnum[12]);
    return 0;
}
