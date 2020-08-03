/*************************************************************************
	> File Name: E0001.c
	> Author: zhengdongqi
	> Mail:    
	> Created Time: 六  2/ 2 22:12:38 2019
 ************************************************************************/
#include <stdio.h>
#define MAX_N 999

int sum(int x) {
    return (MAX_N / x) * (x + (MAX_N - MAX_N % x)) / 2;
}
int main() {
    int num;
    num = sum(3) + sum(5) - sum(15);
    printf("%d = %d + %d - %d\n", num, sum(3), sum(5), sum(15));
    return 0;
}
