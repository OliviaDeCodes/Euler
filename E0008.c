/*************************************************************************
	> File Name: E0008.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  2/ 3 14:46:46 2019
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include "Euler8.h"

int main() {
    int64_t ans = 1, zero = 0, max = 0;
    for (int i = 0; i < 1000; i++) {
        if (a[i] != '0') {
            ans *= a[i] - '0';
        } else {
            ++zero;
        }
        if (i >= 13) {
            if (a[i - 13] != '0') {
                ans /= a[i - 13] - '0';
            } else {
                --zero;
            }
        }
        if (zero == 0 && ans > max) max = ans;
    }
    printf("%"PRId64"\n", max);
    return 0;
}
