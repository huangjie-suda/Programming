/*************************************************************************
	> File Name: 9.mult_inherit.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 11 Nov 2024 03:05:51 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Base1 {};
class Base2 {};

class A : public Base1, protected Base2 {};

class Flyable {
public :
    void fly() {
        cout << "Flying in the sky" << endl;
        return ;
    }
};

class swimmable {
public :
    void swim() {
        cout << "Swimming in the water" << endl;
        return ;
    }
};

class Duck : public Flyable, public swimmable {
public :
    void quack() {
        cout << "Quack, Ga, Ga, Ga" << endl;
        return ;
    }
};

int main() {
    Duck d;
    d.fly();
    d.swim();
    d.quack();
    return 0;
}
