/*************************************************************************
	> File Name: 40.P1113.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 06 Nov 2024 04:09:04 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 10000
int dp[MAX_N + 5];

int main() {
    int n, ans = 0;;
    scanf("%d", &n);
    for (int i = 1, t, j; i <= n; i++) {
        cin >> t >> t;
        dp[i] = t;
        while (cin >> j) {
            if (j == 0) break;
            dp[i] = max(dp[i], dp[j] + t);
        }
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
    return 0;
}
