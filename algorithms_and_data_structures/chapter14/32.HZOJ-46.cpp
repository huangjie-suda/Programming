/*************************************************************************
	> File Name: 32.HZOJ-46.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 05 Nov 2024 04:02:28 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

#define MAX_N 500000
int dp[MAX_N + 5];
char s[MAX_N + 5];
vector<int> g[MAX_N + 5];

void extract(int i, int j) {
    while (s[i] == s[j]) {
        g[i].push_back(j - 1);
        i++, j--;
    }
    return ;
}

int main() {
    cin >> (s + 1);
    int n = strlen(s + 1);
    for (int i = 1; i <= n; i++) {
        extract(i, i);
        extract(i, i + 1);
    }
    dp[0] = -1;
    for (int i = 1; s[i]; i++) {
        dp[i] = i;
        for (auto j : g[i]) {
            dp[i] = min(dp[i], dp[j] + 1);
        }
    }
    cout << dp[n] << endl;
    return 0;
}