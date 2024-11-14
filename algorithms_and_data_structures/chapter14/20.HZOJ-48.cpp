/*************************************************************************
	> File Name: 20.HZOJ-48.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 03 Nov 2024 05:14:55 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_V 10000
int dp[MAX_V + 5] = {0};

int main() {
    int n, V;
    scanf("%d%d", &n, &V);
    for (int i = 1, c, v; i <= n; i++) {
        scanf("%d%d", &c, &v);
        for (int j = c; j <= V; j++) {
            dp[j] = max(dp[j], dp[j - c] + v);
        }
    }
    printf("%d\n", dp[V]);
    return 0;
}
