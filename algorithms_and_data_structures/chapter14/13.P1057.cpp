/*************************************************************************
	> File Name: 13.P1057.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 03 Nov 2024 10:59:59 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 30
#define MAX_M 30

int f[MAX_M + 5][MAX_N + 5] = {0};

int main() {
    int n, m;
    cin >> n >> m;
    f[0][1] = 1;
    for (int j = 1; j <= m; j++) {
        for (int i = 2; i <= n - 1; i++) {
            f[j][i] = f[j - 1][i + 1] + f[j - 1][i - 1];
        }
        f[j][1] = f[j - 1][2] + f[j - 1][n];
        f[j][n] = f[j - 1][1] + f[j - 1][n - 1];
    }
    cout << f[m][1] << endl;
    return 0;
}
