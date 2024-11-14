/*************************************************************************
	> File Name: 9.convert_constructor.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 30 Sep 2024 09:51:25 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A(int z) : x(z), y(z) {
        cout << this << " convert constructor" << endl;
    }
    void operator=(const A &a) {
        this->x = a.x;
        this->y = a.y;
        cout << this << " operator=" << endl;
    }
    void output() {
        cout << "(" << x << ", " << y << ")" << endl;
        return ;
    }
private:
    int x, y;
};

int main() {
    A a(3), b{4}, c = 5;
    a.output();
    b.output();
    c.output();
    a = 4;
    a.output();
    return 0;
}