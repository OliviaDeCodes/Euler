/*************************************************************************
	> File Name: E0015.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 五  2/ 8 12:51:16 2019
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
 
int main() {
    int64_t ans = 1, m = 20;
    for (int32_t i = 40; i > 20; --i) {
        ans *= i;
        while (ans % m == 0 && m != 1) {
            ans /= m;
            --m;
        }
    }
    printf("%"PRId64"\n", ans);
    return 0;
}
