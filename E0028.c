/*************************************************************************
	> File Name: E0028.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 五  2/ 8 19:36:35 2019
 ************************************************************************/
#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i <= 1001; i += 2) {
        sum += 4 * (i * i) - 6 * (i - 1);
    }
    printf("%d\n", sum - 3);
    return 0;
}


