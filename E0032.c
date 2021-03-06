/*************************************************************************
	> File Name: E0032.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 五  2/ 8 19:50:26 2019
 ************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <inttypes.h>
 
int32_t canAdd[100000] = {0};
 
int32_t HowManyDigs(int32_t i, int32_t j) {//返回总位数
    int32_t digs = 0;
    digs += (int32_t)floor(log10(i)) + 1;
    digs += (int32_t)floor(log10(j)) + 1;
    digs += (int32_t)floor(log10(i * j)) + 1;
    return digs;
}
 
bool ProgressOne(int32_t t, int32_t *num) {//进行标记
    while (t) {
        if (t % 10 == 0) return false;
        if (num[t % 10]) return false;
        num[t % 10] = 1;
        t /= 10;
    }
    return true;
}
 
bool IsPandigital(int32_t i, int32_t j) {//确定有没有重复
    int32_t num[10] = {0};
    bool flag = true;
    flag = (flag && ProgressOne(i, num));
    flag = (flag && ProgressOne(j, num));
    flag = (flag && ProgressOne(i * j, num));
    return flag;
}
 
int32_t main() {
    int32_t sum = 0, digs;
    for (int32_t i = 2; i < 100; i++) {
        for (int32_t j = i + 1; ; j++) {
            digs = HowManyDigs(i, j);
            if (digs < 9) continue;
            else if (digs > 9) break;
            if (IsPandigital(i, j) && !canAdd[i * j]) {
                sum += (i * j);
                canAdd[i * j] = 1;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}
 

