/*************************************************************************
	> File Name: 2.HZOJ-186.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 05 Aug 2024 08:33:42 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int f(int i, vector<int> &arr, int n) {
    if (i >= n) return 0;
    return f(i + arr[i], arr, n) + 1;
}

int main() {
    int n;
    vector<int> arr;
    cin >> n;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        arr.push_back(a); 
    }
    cout << f(0, arr, n) << endl;
    return 0;
}
