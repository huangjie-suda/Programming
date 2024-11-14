/*************************************************************************
	> File Name: 5.inherit_constructor_order.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 05 Oct 2024 04:46:16 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Base {
public :
    Base() {
        cout << "Base constructor" << endl;
    }
    ~Base() {
        cout << "Base destructor" << endl;
    }
};

class A : public Base {
public :
    A() {
        data = new int[10];
        cout << "A constructor data : " << data << endl;
    }
    ~A() {
        if (data != nullptr) delete[] data;
        cout << "A destructor data done" << endl;
    }
    int *data;
};

class B : public Base {
public :
    B() {
        cout << "B constructor" << endl;
    }
    ~B() {
        cout << "B constructor" << endl;
    }
};

class C : public Base {
public :
    C() {
        cout << "C constructor" << endl;
    }
    ~C() {
        cout << "C constructor" << endl;
    }
};

void func1() {
    cout << "func1 : " << endl;
    A a;
    return ; 
}

void func2() {
    cout << "func2 : " << endl;
    Base *p = new A();
    delete (A *)p;
    return ; 
}

void func3() {
    cout << "func3 : " << endl;
    Base *p;
    switch (rand() % 3) {
        case 0: p = new A(); break; 
        case 1: p = new B(); break;
        case 2: p = new C(); break;
    }
    delete p; // ??????
    return ;
}

int main() {
    srand(time(0));
    func1();
    func2();
    func3();
    return 0;
}
