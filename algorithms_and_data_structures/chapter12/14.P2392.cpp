/*************************************************************************
	> File Name: 14.P2392.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 28 Oct 2024 01:39:16 PM CST
 ************************************************************************/

#include <iostream>
#include <unordered_map>
using namespace std;

#define MAX_N 20
#define MAX_NUM 9999999
int s[10] = {0};
int sum[10] = {0};
int t[10][MAX_N + 5];
unordered_map<int, int> ind;

int solve(int k) {
    int ans = MAX_NUM;
    int T = (1 << s[k]);
    for (int i = 0; i < T; i++) {
        int j = i, l = 0, r = 0;
        while (j) {
            l += t[k][ind[j & -j]];
            j -= (j & -j);
        }
        r = sum[k] - l;
        ans = min(ans, max(l, r));
    }
    return ans;
}


int main() {
    for (int i = 0; i < 4; i++) cin >> s[i];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < s[i]; j++) {
            cin >> t[i][j];
            sum[i] += t[i][j];
        }
    }
    for (int k = 1, i = 0; i <= MAX_N; i++, k *= 2) ind[k] = i;
    int ans = 0;
    for (int i = 0; i < 4; i++) {
        ans += solve(i);
    }
    cout << ans << endl;
    return 0;
}
