/*************************************************************************
	> File Name: 16.HZOJ-245.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 04 Sep 2024 04:55:04 PM CST
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    int p = arr[n / 2], ans = 0;
    for (int i = 0; i < n; i++) {
        ans += abs(arr[i] - p);
    }
    cout << ans << endl;
    return 0;
}
