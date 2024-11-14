/*************************************************************************
	> File Name: 10.diamond_inherit.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 11 Nov 2024 03:19:34 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    int x;
};

class B : virtual public A {
public :
    void set_x(int x) {
        this->x = x;
        return ;
    }
};

class C : virtual public A {
public :
    int get_x() { return this->x; }
};

class D : public B, public C {};

int main() {
    D obj;
    obj.set_x(3);
    cout << obj.get_x() << endl;
    return 0;
}
