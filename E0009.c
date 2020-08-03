/*************************************************************************
	> File Name: E0009.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  2/ 3 15:51:15 2019
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    bool flag = true;
    int32_t a, b, c, e;
    for (int i = 1; i < 32 && flag; i++) {
        for (int j = i + 1; j <= 32 && flag; j++) {
            a = 2 * i * j;
            b = j * j - i * i;
            c = i * i + j * j;
            if (1000 % (a + b + c) == 0) {
                e = (int32_t)pow(1000 / (a + b + c), 3);
                printf("%d\n", e * a * b * c);
                flag = false;
            }
        }
    }
    return 0;
}
