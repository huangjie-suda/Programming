/*************************************************************************
	> File Name: 10.HZOJ-170.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 01 Aug 2024 10:21:26 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s[n + 5];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
        while (s[i].find("Ban_smoking") != -1) {
            s[i].replace(s[i].find("Ban_smoking"), 3, "No");
        }
        cout << s[i] << endl;
    }
    return 0;
}
