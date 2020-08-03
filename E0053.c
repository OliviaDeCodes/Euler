/*************************************************************************
	> File Name: E0053.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  2/ 9 21:49:44 2019
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define MAX_N 100

int f[MAX_N + 5][MAX_N + 5] = {0};

int main() {
    int cnt = 0;
    for (int i = 0; i <= MAX_N; i++) {
        f[i][0] = f[i][i] = 1;
        for (int j = 1; j < i; j++) {
            f[i][j] = f[i - 1][j] + f[i - 1][j - 1];
            if (f[i][j] > 1000000) f[i][j] = 1000001;
            cnt += (f[i][j] > 1000000);
        }
    }
    cout << cnt << endl;
    return 0;
}
