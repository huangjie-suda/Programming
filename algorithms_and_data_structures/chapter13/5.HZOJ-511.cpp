/*************************************************************************
	> File Name: 5.HZOJ-511.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 29 Oct 2024 02:42:41 PM CST
 ************************************************************************/

#include <iostream>
#include <cinttypes>
using namespace std;

int main() {
    long long  a, b, k, ans = 0;
    cin >> a >> b >> k;
    if (k == 1) {
        cout << b - a << endl;
        return 0;
    }
    if (k == 0) {
        if (b != 0) cout << b - a << endl;
        else cout << !!(a) << endl;
        return 0;
    }
    while (1) {
        if (a * k <= b) {
            ans += 1 + b % k;
            b /= k;
        } else {
            ans += b - a;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
