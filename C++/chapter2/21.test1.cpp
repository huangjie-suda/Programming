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
};

int main() {
    A *pa = new A();
    pa->destroy();
    return 0;
}
