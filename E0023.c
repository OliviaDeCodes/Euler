/*************************************************************************
	> File Name: E0023.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 五  2/ 8 16:50:22 2019
 ************************************************************************/
#include <stdio.h>
#include <math.h>
#define MAX_N 28123

int prime[MAX_N +5] = {0};
int pnum[MAX_N + 5] = {0};
int fnum[MAX_N + 5] = {0};
int dnum[MAX_N + 5] = {0};
int full[MAX_N + 5] = {0};

int init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            pnum[i] = 1;
            fnum[i] = 2;
            dnum[i] = i + 1;
        }
        for(int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i >MAX_N) break;
                 prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) {
                pnum[prime[j] * i] = pnum[i] + 1;
                fnum[prime[j] * i] = fnum[i] / (pnum[i] + 1) * (pnum[i] + 2);
                dnum[prime[j] * i] = dnum[i] / (pow(prime[j],pnum[i] + 1) - 1) *
                (pow(prime[j], pnum[i] + 2) - 1);
            } else {
                pnum[prime[j] * i] = 1;
                fnum[prime[j] * i] = fnum[prime[j]] * fnum[i];
                dnum[prime[j] * i] = dnum[prime[j]] * dnum[i];
            }
        }
        
    }
    for (int i = 0; i <= MAX_N; i++) {
            dnum[i] -= i;
            if (dnum[i] > i) dnum[++dnum[0]] = i;
    }
    return 0;
}
int main() {
    init();
    for (int i = 1; i <= dnum[0]; i++) {
        for (int j = i; j <= dnum[0]; j++) {
            if (dnum[i] + dnum[j] > MAX_N) break;
            full[dnum[i] + dnum[j]] = 1;
        }
    }
    int sum = 0;
    for (int i = 0; i <= MAX_N; i++) {
        if (!full[i]) sum += i;
    }
    printf("%d\n", sum); 
    return 0;
}
