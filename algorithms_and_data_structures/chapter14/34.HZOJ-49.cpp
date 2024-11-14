/*************************************************************************
	> File Name: 34.HZOJ-49.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 05 Nov 2024 05:05:48 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_V 100000
int dp[MAX_V + 5];

int main() {
    int V, n;
    scanf("%d%d", &V, &n);
    for (int i = 0, v, w, s; i < n; i++) {
        scanf("%d%d%d", &v, &w, &s);
        for (int k = 1; s; s -= k, k *= 2) {
            k = min(s, k);
            for (int j = V; j >= k * v; j--) {
                dp[j] = max(dp[j], dp[j - k * v] + k * w);
            }
        }
    }
    printf("%d\n", dp[V]);
    return 0;
}
