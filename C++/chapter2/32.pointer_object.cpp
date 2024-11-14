/*************************************************************************
	> File Name: 32.pointer_object.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 03 Oct 2024 10:39:25 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A {
public :
    int x, y;
};

class Pointer_A {
public :
    Pointer_A(A *p) : p(p) {}
    A *operator->() { return p; }
    A &operator*() { return *p; }
    A *p;
};

ostream &operator<<(ostream &out, const A &a) {
    out << "(" << a.x << ", " << a.y << ")";
    return out;
}

int main() {
    A a;
    Pointer_A p = &a;
    p->x = 3;
    p->y = 4;
    cout << *p << endl;
    return 0;
}
