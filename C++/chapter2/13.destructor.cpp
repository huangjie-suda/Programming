/*************************************************************************
	> File Name: 13.destructor.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 01 Oct 2024 11:28:46 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() : data(new int[10]) {
        cout << this << " default constructor" << endl;
    }
    ~A() {
        cout << this << " destructor" << endl;
        delete[] data;
    }

private:
    int *data;
};

int main() {
    A a, *pa = new A();
    cout << "a : " << &a << endl;
    cout << "pa : " << pa << endl;
    delete pa;
    return 0;
}
