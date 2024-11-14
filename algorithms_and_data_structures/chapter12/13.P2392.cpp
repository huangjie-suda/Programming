/*************************************************************************
	> File Name: 13.P2392.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 27 Oct 2024 04:03:31 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#define MAX_N 20
#define MAX_NUM 9999999
int s[10] = {0};
int t[10][MAX_N + 5] = {0};
int ans = 0;

void dfs(int k, int x, int l, int r) {
    if (k - 1 == s[x]) {
        ans = min(ans, max(l, r));
        return ;
    }
    l += t[x][k];
    dfs(k + 1, x, l, r);
    l -= t[x][k];
    r += t[x][k];
    dfs(k + 1, x, l, r);
    r -= t[x][k];
    return ;
}

int main() {
    for (int i = 1; i <= 4; i++) cin >> s[i];
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= s[i]; j++) cin >> t[i][j];
    }
    int total = 0;
    for (int i = 1; i <= 4; i++) {
        ans = MAX_NUM;
        dfs(1, i, 0, 0);
        total += ans;
    }
    cout << total << endl;
    return 0;
}
