/*************************************************************************
	> File Name: E0020.c
	> Author: zhengdongqi
	> Mail:    
	> Created Time: 五  2/ 8 15:38:50 2019
 ************************************************************************/
#include <stdio.h>
#include <inttypes.h>

int32_t ans[500] = {0};

int main() {
    ans[0] = ans[1] = 1;
    for (int32_t i = 2; i <= 100; i++) {
        for (int32_t j = 1; j <= ans[0]; j++)
            ans[j] *= i;
        for (int32_t j = 1; j <= ans[0]; j++) {
            if (ans[j] < 10) continue;
            ans[j + 1] += ans[j] / 10;
            ans[j] %= 10;
            if (j == ans[0]) ans[0]++;
        }
    }
    int32_t sum = 0;
    for (int32_t i = 1; i <= ans[0]; i++) 
        sum += ans[i];
    printf("%d\n", sum);
    return 0;
}
