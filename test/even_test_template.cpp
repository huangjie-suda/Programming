/*************************************************************************
	> File Name: even_test_template.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 16 Oct 2024 08:29:49 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#define BEGINS(x) namespace x {
#define ENDS(x) }

BEGINS(even_test)

template<int N>
struct is_even {
    static constexpr const char *r = (N % 2 ? "no" : "yes");
};

int main() {
    cout << is_even<5>::r << endl;
    cout << is_even<6>::r << endl;
    return 0;
}


ENDS(even_test)

BEGINS(is_prime_test);





ENDS(is_prime_test)

int main() {
    even_test::main();
    return 0;
}
