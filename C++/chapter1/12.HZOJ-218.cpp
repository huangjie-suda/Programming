/*************************************************************************
	> File Name: 12.HZOJ-218.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 02 Aug 2024 05:01:47 PM CST
 ************************************************************************/

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n, height;
    map<int, vector<int>> arr;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> height;
        arr[height].push_back(i);
    }
    int flag = 0;
    for (auto x : arr) {
        for (auto y : x.second) {
            if (flag) cout << " ";
            cout << y;
            flag = 1;
        }
    }
    cout << endl;
    return 0;
}
