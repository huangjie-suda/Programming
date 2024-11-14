/*************************************************************************
	> File Name: 51.P1637.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 08 Nov 2024 03:47:59 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 300000
#define lowbit(x) ((x) & (-x))
long long c[2][MAX_N + 5];

void add(int k, int i, long long val, int n) {
    while (i <= n) c[k][i] += val, i += lowbit(i);
    return ;
}

long long query(int k, int i) {
    long long sum = 0;
    while (i) {
        sum += c[k][i];
        i -= lowbit(i);
    }
    return sum;
}

int main() {
    int n;
    long long ans = 0;
    cin >> n;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        ans += query(1, a - 1);
        add(0, a, 1, MAX_N);
        add(1, a, query(0, a - 1), MAX_N);
    }
    cout << ans << endl;
    return 0;
}
