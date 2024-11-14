/*************************************************************************
	> File Name: 3.HZOJ-503.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 28 Oct 2024 05:23:17 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int w, n;
    cin >> w >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int ans = 0;
    int i = 0, j = n - 1;
    while (i < j) {
        if (a[j] + a[i] <= w) {
            i++, j--;
        } else {
            j--;
        }
        ans += 1;
    }
    if (i == j) ans += 1;
    cout << ans << endl;
    return 0;
}
