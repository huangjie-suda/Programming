/*************************************************************************
	> File Name: 6.HZOJ-255.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 29 Oct 2024 04:05:36 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define MAX_N 1000
double x[MAX_N + 5], y[MAX_N + 5];

struct Data {
    double l, r;
};

bool cmp(const Data &a, const Data &b) {
    return a.r < b.r;
}

int main() {
    int n;
    double d;
    cin >> n >> d;
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    Data arr[n];
    for (int i = 0; i < n; i++) {
        if (abs(y[i]) > d) {
            cout << -1 << endl;
            return 0;
        }
        arr[i].l = x[i] - sqrt(d * d - y[i] * y[i]);
        arr[i].r = x[i] + sqrt(d * d - y[i] * y[i]);
    }
    sort(arr, arr + n, cmp);
    int cnt = 1;
    double pos = arr[0].r;
    for (int i = 1; i < n; i++) {
        if (pos < arr[i].l) {
            cnt += 1;
            pos = arr[i].r;
        }
    }
    cout << cnt << endl;
    return 0;
}
