/*************************************************************************
	> File Name: 7.HZOJ-264-2.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 23 Oct 2024 03:56:36 PM CST
 ************************************************************************/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> arr(n + 2, -1), l(n + 2), r(n + 2);
    stack<int> s;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    // right
    for (int i = 0; i <= n + 1; i++) {
        while (!s.empty() && arr[s.top()] > arr[i]) {
            r[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    // left
    for (int i = n + 1; i >= 0; i--) {
        while (!s.empty() && arr[s.top()] > arr[i]) {
            l[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        long long height = arr[i], width = r[i] - l[i] - 1;
        ans = max(height * width, ans);
    } 
    printf("%lld\n", ans);
    return 0;
}
