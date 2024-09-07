/*************************************************************************
	> File Name: 7.string.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 01 Aug 2024 04:13:01 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << endl;
    if (s1 < s2) cout << s1 << "<" << s2 << endl;
    if (s1 == s2) cout << s1 << "==" << s2 << endl;
    if (s1 > s2) cout << s1 << ">" << s2 << endl;
    cout << "s1.length() = " << s1.length() << endl;
    cout << "s2.size() = " << s2.size() << endl;

    for (int i = 0; i < s1.length(); i++) {
        cout << "s1[" << i << "] = " << s1[i] << endl; 
    }
    for (int i = 0; s2[i]; i++) {
        cout << "s2[" << i << "] = " << s2[i] << endl;  
    }

    cout << s1 + s2 << endl;
    cout << s1 + "hello world" << endl;

    cout << s1.substr(1, 2) << endl; // s1 = abcd, bc
    return 0;
}
