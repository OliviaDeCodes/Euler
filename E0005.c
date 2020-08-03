/*************************************************************************
	> File Name: E0005.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  2/ 3 12:06:50 2019
 ************************************************************************/
#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

int64_t gcd(int64_t a, int64_t b) {
    if(!b) return a;
    return gcd(b, a % b);
}

int main() {
    int64_t ans = 1;
    for (int64_t i = 1; i <= 20; ++i) {
        ans *= i / gcd(i, ans);
    }
    printf("%"PRId64"\n", ans);
    return 0;
}
