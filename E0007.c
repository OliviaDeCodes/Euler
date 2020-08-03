/*************************************************************************
	> File Name: E0007.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  2/ 3 14:11:00 2019
 ************************************************************************/
#include <stdio.h>
#define MAX_N 150000

int prime[MAX_N + 5] = {0};

void init_prime() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0] && prime[j] * i <= MAX_N; j++) {
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}
int main() {
    init_prime();
    printf("%d\n", prime[10001]);
    return 0;
}
