/*************************************************************************
	> File Name: E0011.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 五  2/ 8 10:27:03 2019
 ************************************************************************/
#include <stdio.h>
#include <inttypes.h>
int32_t nums[35][35] = {0};
int32_t direct[4][2] = {0, 1, 1, 1, 1, 0, 1, -1};

int main() {
    for (int32_t i = 5; i <= 24; i++) {
        for (int32_t j = 5; j <= 24; j++) {
            scanf("%d", &nums[i][j]);
        }
    }
    int32_t p, max = 0;
    for (int32_t i = 5; i <= 24; i++) {
        for (int32_t j = 5; j <= 24; j++) {
            for (int32_t k = 0; k < 4; k++) {//方向
                p = 1;
                for (int32_t l = 0; l < 4; l++) {//步数
                    p *= nums[i + l * direct[k][0]][j + l * direct[k][1]];
                }
                if (p > max) max = p;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}
