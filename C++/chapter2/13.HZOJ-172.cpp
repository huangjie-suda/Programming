/*************************************************************************
	> File Name: 13.HZOJ-172.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 02 Aug 2024 08:21:07 PM CST
 ************************************************************************/

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> s;
    string name;
    for (int i = 0; i < 10; i++) {
        cin >> name;
        s.insert(name);
    }
    for (auto x : s) {
        cout << x << endl;
    }
    return 0;
}
