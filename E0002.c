/*************************************************************************
	> File Name: E0002.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  2/ 2 22:25:45 2019
 ************************************************************************/
#include <stdio.h> 
#define MAX_N 4000000

int main() {
    int fib[2] = {1, 1}, n = 2, sum = 0;
    while (fib[(n - 1) % 2] <= MAX_N) {
        if (fib[(n - 1) % 2] % 2 == 0) sum += fib[(n - 1) % 2];
        fib[n % 2] += fib[(n - 1) % 2];
        n += 1;
    }
    printf("%d\n", sum);
    return 0;
}
