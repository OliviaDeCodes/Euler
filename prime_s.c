/*************************************************************************
	> File Name: prime_s.c
	> Author: zhengdongqi 
	> Mail: 
	> Created Time: 六 12/29 13:05:48 2018
 ************************************************************************/

#include <stdio.h>

#define MAX_N 100

int prime[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i * i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i * i; j <= MAX_N; j += i) {
            prime[j] = 1;
        }
    }
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        prime[++prime[0]] = i;
    }
    return ;
}

int main() {
    init();
    for (int i = 1; i <= prime[0]; i++) {
        printf("%d ", prime[i]);
    }
    printf("\n");
    return 0;
}
