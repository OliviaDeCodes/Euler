/*************************************************************************
	> File Name: E0010.c
	> Author: zhengdongqi
	> Mail:    
	> Created Time: 日  2/ 3 17:52:02 2019
 ************************************************************************/
#include <stdio.h> 
#include <inttypes.h>
#include <stdlib.h>
#define MAX_N 2000000

int32_t prime[MAX_N + 5] = {0};

int main() {
    int64_t sum = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            sum += i;
        }
        for (int j = 1; j <= prime[0] && prime[j] * i <= MAX_N; j++) {
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    printf("%"PRId64"\n", sum);
    return 0;
}
