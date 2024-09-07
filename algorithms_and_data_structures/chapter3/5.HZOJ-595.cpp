/*************************************************************************
	> File Name: 5.HZOJ-595.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 18 Aug 2024 10:27:40 PM CST
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, flag = 0;
    cin >> n;
    vector<string> ops(n), s;
    string target;
    for (int i = 0; i < n; i++) cin >> ops[i];
    cin >> target;
    for (int i = 0; i < n; i++) {
        if (ops[i] == target) {
            s.push_back(ops[i]);
            flag = 1;
            break;
        }
        if (ops[i] == "return") s.pop_back();
        else s.push_back(ops[i]);
    }
    if (flag) {
        for (int i = 0; i < s.size(); i++) {
            if (i) cout << "->";
            cout << s[i];
        }
        cout << endl;
    } else cout << "NOT REFERENCED" << endl;
    return 0;
}
