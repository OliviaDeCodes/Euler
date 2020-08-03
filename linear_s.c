/*************************************************************************
	> File Name: linear_s.c
	> Author: zhengdongqi 
	> Mail: 
	> Created Time: 六 12/29 13:09:37 2018
 ************************************************************************/

#include <stdio.h>
#define MAX_N 100

int prime[MAX_N + 5] = {0};

int main() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 2; j <= prime[0] && prime[j] * i <= MAX_N; j++) {
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    for (int i = 1; i <= prime[0]; i++) {
        printf("%d ", prime[i]);
    }
    printf("\n");
    return 0;
}
