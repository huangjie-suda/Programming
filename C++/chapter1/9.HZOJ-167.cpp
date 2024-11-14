/*************************************************************************
	> File Name: 9.HZOJ-167.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 01 Aug 2024 09:55:06 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int x;
    cin >> a >> x >> b;
    cout << a.size() << endl;
    cout << a.find('a') + 1 << endl;
    cout << a.insert(x - 1, b) << endl;
    return 0;
}
