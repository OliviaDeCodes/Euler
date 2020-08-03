/*************************************************************************
	> File Name: E0031.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 五  2/ 8 19:47:40 2019
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
 
int32_t many[8]={1, 2, 5, 10, 20, 50, 100, 200};
int32_t d[205] = {0};
 
int32_t main() {
    d[0] = 1;
    for (int32_t i = 0; i < 8; i++)
        for (int32_t j = 0; j <= 200 - many[i]; j++)
            d[j + many[i]] += d[j];
    printf("%d\n", d[200]);
    return 0;
}

