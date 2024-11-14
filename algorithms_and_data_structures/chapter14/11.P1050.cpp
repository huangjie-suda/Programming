/*************************************************************************
	> File Name: 11.P1050.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 02 Nov 2024 04:32:15 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, base = 1, x, y;
    cin >> n >> k;
    for (int i = 0; i < k; i++, base *= 10);
    x = n % base;
    y = x;
    int cnt = 1;
    while (x * y % base != x) {
        cout << "y = " << y << "(" << cnt << "), ";
        y = y * x % base;
        cnt += 1;
        if ((cnt - 1) % 4 == 0) cout << endl;
    }
    cout << cnt << endl;
    return 0;
}
