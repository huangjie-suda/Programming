/*************************************************************************
	> File Name: 8.HZOJ-166.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 01 Aug 2024 09:49:01 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int x;
    cin >> a >> x >> b;
    cout << min((int)a.size(), 100) << endl;
    cout << a.insert(x - 1, b) << endl;
    cout << a.size() - a.rfind('x') << endl;
    return 0;
}
