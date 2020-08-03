/*************************************************************************
	> File Name: E0036.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  2/ 9 20:24:41 2019
 ************************************************************************/
#include <stdio.h> 
#include <inttypes.h>

#define MAX_N 1000000

int reverse_base(int n, int base) {
    if (base <= 1) return 0;
    int x = 0;
    while(n) {
        x = x * base + n % base;
        n /= base;
    }
    return x;
}

int main() {
    int sum = 0, base2, base10;
    for (int i = 1; i <= MAX_N; i++) {
        base2 = reverse_base(i, 2);
        base10 = reverse_base(i, 10);
        if (base2 == base10 && base10 == i) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
