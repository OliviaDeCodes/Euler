/*************************************************************************
	> File Name: E0004.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  2/ 3 11:16:42 2019
 ************************************************************************/
#include <stdio.h> 

int is_valid(int x) {
    int temp = x, num = 0;
    while (x) {
        num = num * 10 + x % 10;
        x /= 10;
    }
    return temp == num;
}

int main() {
    int ans = 10000;
    for (int a = 100; a < 1000; a++) {
        for (int b = ans / a + 1; b <= a; b++) {
            if (!is_valid(a * b)) continue;
            if (ans >= a * b) continue;
            printf("%d * %d = %d\n", a, b, a * b);
            ans = a * b;
        }
    }
    printf("%d\n", ans);
    return 0;
}
