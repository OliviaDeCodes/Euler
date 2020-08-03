/*************************************************************************
	> File Name: E0073.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六 12/29 16:37:57 2018
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
#define MAX_N 12000

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int cnt = 0;
    for (int i = 2; i <= MAX_N; i++) {
        for (int j = i / 3 + 1; 2 * j < i; j++) {
            cnt += (gcd(i, j) == 1);
        }
    }
    cout << cnt << endl;
    return 0;
}
