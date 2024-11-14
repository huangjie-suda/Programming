/*************************************************************************
	> File Name: 42.P1507.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 06 Nov 2024 04:51:40 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_H 400
#define MAX_T 400
int dp[MAX_H + 5][MAX_T + 5];

int main() {
    int n, H, T;
    cin >> H >> T;
    cin >> n;
    for (int i = 0, h, t, k; i < n; i++) {
        cin >> h >> t >> k;
        for (int j1 = H; j1 >= h; j1--) {
            for (int j2 = T; j2 >= t; j2--) {
                dp[j1][j2] = max(dp[j1][j2], dp[j1 - h][j2 - t] + k);
            }
        }
    }
    cout << dp[H][T] << endl;
    return 0;
}
