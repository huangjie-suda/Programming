/*************************************************************************
	> File Name: 52.P1858.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 08 Nov 2024 04:27:36 PM CST
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

#define MAX_V 5000
#define MAX_K 50
int dp[MAX_V + 5][MAX_K + 5];
int temp[MAX_K + 5];

int main() {
    int K, V, N;
    cin >> K >> V >> N;
    dp[0][0] = 1, dp[0][1] = 0;
    for (int i = 0, v, w; i < N; i++) {
        cin >> v >> w;
        for (int j = V; j >= v; j--) {
            int p1 = 1, p2 = 1, t = 1;
            int n1 = dp[j][0], n2 = dp[j - v][0];
            while (p1 <= n1 || p2 <= n2) {
                if (p2 > n2 || (p1 <= n1 && dp[j][p1] >= dp[j - v][p2] + w)) {
                    temp[t++] = dp[j][p1++];
                } else {
                    temp[t++] = dp[j - v][p2++] + w;
                }
                if (t > K) break;
            }
            temp[0] = t - 1;
            memcpy(dp[j], temp, sizeof(int) * t);
        }
    }
    int ans = 0;
    for (int i = 1; i <= K; i++) ans += dp[V][i];
    cout << ans << endl;
    return 0;
}
