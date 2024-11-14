/*************************************************************************
	> File Name: 21.test1.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 02 Oct 2024 11:42:15 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() {
        cout << "constructor" << endl;
    }
    void destroy() {
        delete this;
        return ;
    }

private:
    ~A() {
        cout << "destructor" << endl;
    };
    friend void function_test();
};

void function_test() {
    A a;
    return ;
}

int main() {
    A *pa = new A();
    pa->destroy();
    function_test();
    return 0;
}
