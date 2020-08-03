/*************************************************************************
	> File Name: E0013.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 五  2/ 8 12:23:11 2019
 ************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char w[55];
    int32_t num[100] = {0}, len;
    for (int i = 0; i < 100; i++) {
        scanf("%s", w);
        len = strlen(w);
        if (len > num[0]) num[0] = len;
        for (int i = len - 1; i >= 0; i--) {
            num[len - i] += w[i] - '0';
        }
    }
    for (int i = 1; i <= num[0]; i++) {
        if (num[i] >= 10) {
            num[i + 1] += num[i] / 10;
            num[i] %= 10;
            if (i + 1 > num[0]) num[0] = i + 1;
        }
    }
    for (int i = num[0]; i > num[0] - 10; i--) {
        printf("%d", num[i]);
    }
    printf("\n");
    return 0;
}
