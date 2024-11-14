/*************************************************************************
	> File Name: 17.new_delete.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 01 Oct 2024 03:25:17 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A(string msg) {
        cout << msg << " constructor" << endl;
    }
    ~A() {
        cout << "destructor" << endl;
    }
};

int main() {
    A *malloc_a = (A *)malloc(sizeof(A));
    free(malloc_a);
    A *new_a = new A("new");
    delete new_a;
    return 0;
}
