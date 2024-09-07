/*************************************************************************
	> File Name: 15.function.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 02 Aug 2024 09:51:15 PM CST
 ************************************************************************/

#include <iostream>
#include <functional>
using namespace std;

void test() {
    cout << "hello test" << endl;
}

int add(int a, int b) {
    return a + b;
}

int main() {
    function<void()> p1 = test;
    p1();
    function<int(int, int)> p2 = add;
    cout << p2(3, 4) << endl;
    return 0;
}
