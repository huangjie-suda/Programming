/*************************************************************************
	> File Name: 17.HZOJ-47-1.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 03 Nov 2024 04:47:25 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_V 10000
int dp[MAX_V + 5] = {0};

int main() {
    int V, n;
    scanf("%d%d", &V, &n);
    for (int i = 1, v, w; i <= n; i++) {
        scanf("%d%d", &v, &w);
        for (int j = V; j >= v; j--) {
            dp[j] = max(dp[j], dp[j - v] + w);
        }
    }
    printf("%d\n", dp[V]);
    return 0;
}
