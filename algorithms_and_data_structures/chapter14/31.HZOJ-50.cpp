/*************************************************************************
	> File Name: 31.HZOJ-50.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 05 Nov 2024 03:12:49 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 32
#define MAX_K 1000
long long dp[MAX_N + 5][MAX_K + 5];

int main() {
    long long n, m;
    scanf("%lld%lld", &n, &m);
    if (n == 1) {
        printf("%lld\n", m);
        return 0;
    }
    for (int i = 1; i <= MAX_K; i++) dp[1][i] = i;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= MAX_K; j++) {
            dp[i][j] = dp[i - 1][j - 1] + dp[i][j - 1] + 1;
            if (dp[i][j] > m) break;
        }
    }
    int k = 1;
    while (dp[n][k] < m) k += 1;
    printf("%d\n", k);
    return 0;
}
