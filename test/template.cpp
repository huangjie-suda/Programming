/*************************************************************************
	> File Name: template.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 16 Oct 2024 03:27:40 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define BEGINS(x) namespace x {
#define ENDS(x) }

BEGINS(even_test)

template<int N>
struct YES_OR_NO {
    static const char *r;
};

template<>
const char *YES_OR_NO<1>::r = "no";

template<>
const char *YES_OR_NO<0>::r = "yes";

template<int N>
struct is_even {
    static const char *r;
};

template<int N>
const char *is_even<N>::r = YES_OR_NO<(N % 2)>::r;

int main() {
    cout << is_even<5>::r << endl;
    cout << is_even<6>::r << endl;
    return 0;
}

ENDS(even_test)

BEGINS(good_bad_test)

template<int N>
struct GOOD_OR_BAD {
    static const char *r;
};

template<>
const char *GOOD_OR_BAD<1>::r = "good";

template<>
const char *GOOD_OR_BAD<0>::r = "bad";

template<int N>
struct good_bad {
    static const char *r;
};

template<int N>
const char *good_bad<N>::r = GOOD_OR_BAD<(N >= 60)>::r;

int main() {
    cout << good_bad<60>::r << endl;
    cout << good_bad<54>::r << endl;
    return 0;
}

ENDS(good_bad_test)

BEGINS(sum_test)

template<int N>
struct sum {
    static constexpr int r = sum<N - 1>::r + N; 
};

template<>
struct sum<1> {
    static constexpr int r = 1;
};

int main() {
    cout << sum<5>::r << endl;
    cout << sum<7>::r << endl;
    cout << sum<100>::r << endl;
    return 0;
}

ENDS(sum_test)

BEGINS(is_prime_test)


ENDS(is_prime_test)

int main() {
    even_test::main();
    good_bad_test::main();
    sum_test::main();
    return 0;
}
