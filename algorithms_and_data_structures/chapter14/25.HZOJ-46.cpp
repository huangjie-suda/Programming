/*************************************************************************
	> File Name: 25.HZOJ-46.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 04 Nov 2024 04:12:36 PM CST
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

#define MAX_N 1000
char s[MAX_N + 5];
int dp[MAX_N + 5][MAX_N + 5] = {0};

int main() {
    scanf("%s", s + 1);
    int n = strlen(s + 1);
    for (int l = 1; l <= n; l++) {
        for (int i = 1; i <= n - l + 1; i++) {
            int j = i + l - 1;
            if (s[i] == s[j] && dp[i + 1][j - 1] == 0) {
                dp[i][j] = 0;
            } else {
                dp[i][j] = l - 1;
                for (int k = i; k < j; k++) {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + 1);
                }
            }
        }
    }
    printf("%d\n", dp[1][n]);
    return 0;
}
