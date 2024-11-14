/*************************************************************************
	> File Name: 34.rvo.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 04 Oct 2024 04:10:59 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A {
public :
    A() {
        cout << this << " : default constructor" << endl;
    }
    A(const A &a) {
        cout << this << " : copy constructor" << endl;
    }
};

A f() {
    A temp;
    cout << "temp : " << &temp << endl;
    return temp;
}

int main() {
    A a = f();
    cout << "a : " << &a << endl;
    return 0;
}
