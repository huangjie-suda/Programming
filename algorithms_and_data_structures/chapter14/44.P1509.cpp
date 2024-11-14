/*************************************************************************
	> File Name: 44.P1509.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 07 Nov 2024 03:25:42 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 100
int dp[MAX_N + 5][MAX_N + 5], dpt[MAX_N + 5][MAX_N + 5];
int r[MAX_N + 5], rp[MAX_N + 5], t[MAX_N + 5];

int main() {
    int n, M, R;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> r[i] >> rp[i] >> t[i];
    }
    cin >> M >> R;
    for (int i = 0; i < n; i++) {
        for (int j = M; j >= r[i]; j--) {
            for (int k = R; k >= rp[i]; k--) {
                if (dp[j][k] < dp[j - r[i]][k - rp[i]] + 1) {
                    dp[j][k] = dp[j - r[i]][k - rp[i]] + 1;
                    dpt[j][k] = dpt[j - r[i]][k - rp[i]] + t[i];
                } else if (dp[j][k] == dp[j - r[i]][k - rp[i]] + 1) {
                    dpt[j][k] = min(dpt[j][k], dpt[j - r[i]][k - rp[i]] + t[i]);
                }
            }
        }
    }
    cout << dpt[M][R] << endl;
    return 0;
}
