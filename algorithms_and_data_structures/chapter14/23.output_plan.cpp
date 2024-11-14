/*************************************************************************
	> File Name: 22.HZOJ-44.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 04 Nov 2024 02:23:04 PM CST
 ************************************************************************/

#include <iostream>
#include <cinttypes>
using namespace std;

#define MAX_N 1000000
int val[MAX_N + 5];
int dp[MAX_N + 5] = {0};
int pre[MAX_N + 5] = {0};

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", val + i);
    }
    val[0] = INT32_MIN;
    int ans = 0, ind = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (val[j] >= val[i]) continue;
            if (dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
                pre[i] = j;
            }
        }
        if (dp[i] > ans) {
            ans = dp[i];
            ind = i;
        }
    }
    printf("%d\n", ans);
    while (ind) {
        printf("%d(%d)->", ind, val[ind]);
        ind = pre[ind];
    }
    printf("\n");
    return 0;
}
