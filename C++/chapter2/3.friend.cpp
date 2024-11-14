/*************************************************************************
	> File Name: 3.friend.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 28 Sep 2024 06:08:20 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    void output() {
        cout << "Class A : " << x << ", " << y << endl;
        return ;
    }
private:
    int x, y;
    friend int main();
    friend class B;
};

void test(A &a) {
    return ;
}

class B {
public :
    void change(A &a) {
        a.x = 100, a.y = 200;
        return ;
    }
};

int main() {
    A a;
    test(a);
    a.x = 3, a.y = 4;
    a.output();

    B b;
    b.change(a);
    a.output();
    return 0;
}
