/*************************************************************************
	> File Name: 5.cin.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 01 Aug 2024 03:27:59 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << "a = " << a << endl;
    double b;
    char c[100];
    cin >> a >> b >> c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    while (cin >> a) {
        cout << "a = " << a << endl;
    } 
    return 0;
}
