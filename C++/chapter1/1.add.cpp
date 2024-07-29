/*************************************************************************
	> File Name: 1.add.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 29 Jul 2024 04:47:08 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int add1(int a, int b) {
    return a + b;
}

class ADD {
public :
    int operator()(int a, int b) const {
        return a + b;
    }
} add2;

template<typename T, typename U>
auto add3(T a, U b) -> decltype(a + b) {
    return a + b;
}

auto add4 = [](int a, int b) -> int {
    return a + b;
};

template<int N, int M>
struct add5 {
    static const int r = N + M;

};

int main() {
    cout << add1(3, 4) << endl;
    cout << add2(3, 4) << endl;
    cout << add3(3, 4) << endl;
    cout << add4(3, 4) << endl;
    cout << add5<3, 4>::r << endl;
    return 0;
}
