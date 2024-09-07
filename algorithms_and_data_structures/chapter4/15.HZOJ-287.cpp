/*************************************************************************
	> File Name: 15.HZOJ-287.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 04 Sep 2024 04:36:36 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <set>
using namespace std;

typedef pair<int, int> PII;

int main() {
    int n;
    cin >> n;
    set<PII> s;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        s.insert(PII(a, i));
    }
    int ans = 0;
    for (int i = 1; i < n; i++) {
        int a = s.begin()->first;
        s.erase(s.begin());
        int b = s.begin()->first;
        s.erase(s.begin());
        ans += a + b;
        s.insert(PII(a + b, n + i));
    }
    cout << ans << endl;
    return 0;
}
