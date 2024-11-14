/*************************************************************************
	> File Name: 16.delete_default.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 01 Oct 2024 03:15:36 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() = default;
    A(const A &) = default;
    ~A() = default;
};

int main() {
    A a;
    return 0;
}
