/*************************************************************************
	> File Name: 4.HZOJ-270.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 22 Oct 2024 05:02:08 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <deque>
#include <cinttypes>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> s(n + 1);
    deque<int> q;
    s.push_back(0);
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        s[i] += s[i - 1];
    }
    q.push_back(0);
    int ans = INT32_MIN;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, s[i] - s[q.front()]);
        while (!q.empty() && s[q.back()] > s[i]) q.pop_back();
        q.push_back(i);
        if (q.front() == i - m) q.pop_front();
    }
    cout << ans << endl;
    return 0;
}
