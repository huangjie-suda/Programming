/*************************************************************************
	> File Name: 4.default_constructor.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 29 Sep 2024 02:19:07 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() {
        cout << "default constructor" << endl;
        x = 10, y = 100;
    }
    void output() {
        cout << "(" << x << ", " << y << ")" << endl;
        return ;
    }
private:
    int x, y;
};

int main() {
    A a;
    a.output();
    A b{};
    b.output();
    // b.output();
    return 0;
}

//A b() {
//   cout << "hello function b" << endl;
//    return A();
//}
