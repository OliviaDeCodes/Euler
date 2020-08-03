/*************************************************************************
	> File Name: E0006.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  2/ 3 13:52:29 2019
 ************************************************************************/
#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int64_t add(int64_t x) {
    return pow(x * (x + 1) / 2, 2);
}

int64_t calc(int64_t x) {
    return (2 * x * x * x + 3 * (x + 1) * x - 2 * x) / 6;
} 

int main() {
    int n;
    scanf("%d", &n);
    printf("%"PRId64" = %"PRId64" - %"PRId64"\n", add(n) - calc(n), add(n), calc(n));
    return 0;
}
