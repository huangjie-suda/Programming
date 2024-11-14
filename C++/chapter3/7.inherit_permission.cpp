/*************************************************************************
	> File Name: 7.inherit_permission.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 05 Oct 2024 11:25:52 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Base {
public :
    int public_x;
protected:
    int protected_x;
private:
    int private_x;
};

class A : public Base {
public :
    void set() {
        this->public_x = 3;
        this->protected_x = 3;
        this->private_x = 3;
        return ;
    }
};

class B : public A {
public :
    void set() {
        this->public_x = 3;
        this->protected_x = 3;
        this->private_x = 3;
        return ;
    }
};

int main() {
    A a;
    a.public_x = 3;
    a.protected_x = 3;
    a.private_x = 3;
    return 0;
}
