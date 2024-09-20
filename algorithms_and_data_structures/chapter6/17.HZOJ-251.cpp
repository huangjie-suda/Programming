/*************************************************************************
	> File Name: 17.HZOJ-251.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 14 Sep 2024 04:15:29 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    int X, Y, CostX = 0, CostY = 0;
    sort(x.begin(), x.end());
    for (int i = 0; i < n; i++) x[i] = x[i] - i;
    sort(x.begin(), x.end());
    X = x[n / 2];
    for (int i = 0; i < n; i++) CostX += abs(x[i] - X);
    sort(y.begin(), y.end());
    Y = y[n / 2];
    for (int i = 0; i < n; i++) CostY += abs(y[i] - Y);
    cout << CostX + CostY << endl;
    return 0;
}
