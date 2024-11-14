/*************************************************************************
	> File Name: 10.HZOJ-372.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 24 Oct 2024 02:39:12 PM CST
 ************************************************************************/

#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr1(n), arr2(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    deque<int> s1, s2;
    int i;
    for (i = 0; i < n; i++) {
        while (!s1.empty() && s1.back() >= arr1[i]) s1.pop_back();
        while (!s2.empty() && s2.back() >= arr2[i]) s2.pop_back();
        s1.push_back(arr1[i]);
        s2.push_back(arr2[i]);
        if (s1.size() != s2.size()) break;
    }
    cout << i << endl;
    return 0;
}
