/*************************************************************************
	> File Name: 3.inherit_pointer.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 05 Oct 2024 03:52:56 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Base {
public :
    Base(int x, int y) : x(x), y(y) {}
    int x, y;
};

class A : public Base {
public :
    A(int x, int y, int z) : Base(x, y), z(z) {}
    int z;
};

void func1(Base *p) {
    cout << "Base : " << p->x << ", " << p->y << endl;
    return ;
}

ostream &operator<<(ostream &out, const Base &obj) {
    out << "Base (" << obj.x << ", " << obj.y << ")";
    return out;
}

int main() {
    A a(3, 4, 5);
    func1(&a);
    Base &b = a;
    b.x = 5;
    b.y = 6;
    func1(&a);
    cout << a << endl;
    return 0;
}
