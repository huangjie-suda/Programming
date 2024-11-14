/*************************************************************************
	> File Name: 36.HZOJ-51.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 06 Nov 2024 11:35:20 AM CST
 ************************************************************************/

#include <iostream>
#include <stack>
using namespace std;

#define MAX_N 1000
int dp[MAX_N + 5][MAX_N + 5];
int f[MAX_N + 5][MAX_N + 5];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &f[i][j]);
        }
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= m; j++) {
            if (f[i][j] == 0) continue;
            f[i][j] += f[i + 1][j];
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = m; j >= 1; j--) {
            int k = j;
            while (k <= m && f[i][k] >= f[i][j]) k += 1;
            dp[i][j] = f[i][j] * (k - j) + dp[i][k];
            dp[i][j] %= 100007;
            ans += dp[i][j];
            ans %= 100007;
        }
    }
    printf("%d\n", ans);
    return 0;
}
