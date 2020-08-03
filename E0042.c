/*************************************************************************
	> File Name: E0042.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  2/ 9 21:14:10 2019
 ************************************************************************/
#include <stdio.h>
#include <inttypes.h>
#include <math.h>
#include "Euler42.h"
 
bool isTriangleNumber(int32_t n) {//判断是否是三角形数
    int32_t m = (int32_t)floor(sqrt(n * 2));
    return m * (m + 1) / 2 == n;
}
 
int32_t main() {
    int32_t i = 0, sum = 0, total = 0;
    while (wordList[i].length() != 0) {
        sum = 0;
        for (int32_t j = 0; j < wordList[i].length(); j++) {
            sum += wordList[i][j] - 'A' + 1;
        }
        if (isTriangleNumber(sum)) ++total;
        ++i;
    }
    printf("%d\n", total);
    return 0;
}
 
