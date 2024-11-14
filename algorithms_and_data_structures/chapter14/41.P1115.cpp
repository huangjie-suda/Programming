/*************************************************************************
	> File Name: 41.P1115.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 06 Nov 2024 04:35:59 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, ans = 0x80000000, pre_dp = 0, dp;
    scanf("%d", &n);
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        if (pre_dp > 0) dp = pre_dp + x;
        else dp = x;
        ans = max(ans, dp);
        pre_dp = dp;
    }
    cout << ans << endl;
    return 0;
}
