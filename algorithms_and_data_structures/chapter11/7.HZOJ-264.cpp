/*************************************************************************
	> File Name: 7.HZOJ-264.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 23 Oct 2024 12:24:56 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <stack>
#include <deque>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    arr.push_back(0);
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    arr.push_back(0);
    vector<int> l(arr.size() + 1), r(arr.size() + 1);
    stack<int> s;
    // right
    for (int i = 0, I = arr.size(); i < I; i++) {
        while (!s.empty() && arr[s.top()] > arr[i]) {
            r[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty()) s.pop();
    // left
    for (int i = arr.size() - 1; i >= 0; i--) {
        while (!s.empty() && arr[s.top()] > arr[i]) {
            l[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        long long temp = (long long)arr[i] * (r[i] - l[i] - 1);
        ans = max(ans, temp);
    }
    cout << ans << endl;
    return 0;
}
