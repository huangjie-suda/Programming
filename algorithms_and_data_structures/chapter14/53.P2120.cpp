/*************************************************************************
	> File Name: 53.P2120.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 08 Nov 2024 05:25:56 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

#define MAX_N 1000000
long long dp[MAX_N + 5], x[MAX_N + 5];
long long f[MAX_N + 5];
long long c[MAX_N + 5];
long long s[MAX_N + 5]; // sum of pk
long long t[MAX_N + 5]; // sum of xk * pk
int q[MAX_N + 5], head = 0, tail = 0; 

void set(int i, int j) {
    dp[i] = dp[j] + x[i] * (s[i] - s[j]) - (t[i] - t[j]) + c[i];
    f[i] = dp[i] + t[i];
    return ;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> s[i] >> c[i];
        t[i] = t[i - 1] + x[i] * s[i];
        s[i] += s[i - 1];
    }
    set(1, 0);
    q[tail++] = 0;
    q[tail++] = 1;
    for (int i = 2; i <= n; i++) {
        do {
            long long X = s[q[head + 1]] - s[q[head]];
            long long Y = f[q[head + 1]] - f[q[head]];
            if (tail - head >= 2 && Y < x[i] * X) ++head;
            else break;
        } while (1);
        set(i, q[head]);
        do {
            long long A = s[i] - s[q[tail - 1]];
            long long B = s[q[tail - 1]] - s[q[tail - 2]];
            long long C = f[i] - f[q[tail - 1]];
            long long D = f[q[tail - 1]] - f[q[tail - 2]];
            if (tail - head >= 2 && B * C < A * D) --tail;
            else break;
        } while (1);
        q[tail++] = i;
    }
    long long ans = dp[n];
    for (int i = n - 1; i >= 1 && s[i] == s[i + 1]; i--) {
        ans = min(ans, dp[i]);
    }
    cout << ans << endl;
    return 0;
}
