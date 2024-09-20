/*************************************************************************
	> File Name: 10.HZOJ-285.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 08 Sep 2024 01:24:43 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

typedef pair<int, int> PII;

int main() {
    int n, m , t = 0;
    cin >> n >> m;
    set<PII> s;
    s.insert(PII(0, t++));
    for (int i = 0; i < n; i++) {
        vector<int> temp;
        for (auto x : s) {
            temp.push_back(x.first);
        }
        s.clear();
        for (int i = 0, a; i < m; i++) {
            cin >> a;
            for (auto x : temp) {
                if (s.size() < m || s.begin()->first < x - a) {
                    s.insert(PII(x - a, t++));
                }
                if (s.size() > m) s.erase(s.begin());
            }
        }
    }
    int flag = 0;
    for (auto iter = s.rbegin(); iter != s.rend(); iter++) {
        if (flag) cout << " ";
        cout << -iter->first;
        flag = 1;
    }
    cout << endl;
    return 0;
}
