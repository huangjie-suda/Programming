/*************************************************************************
	> File Name: 9.string.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 26 Oct 2024 04:17:28 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string a = "abcdefgcde", b = "cde", c = "xxx";
    cout << a << " " << b << endl;
    int pos = -1;
    while (1) {
        pos = a.find(b, pos + 1);
        cout << pos << endl;
        if (pos == -1) break;
        a.erase(pos, b.size());
        a.insert(pos, c);
    }
    cout << a << endl;
    return 0;
}
