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
    static constexpr const char *r = (N ? "no" : "yes");
};

template<int N>
struct is_even {
    static constexpr const char *r = YES_OR_NO<N % 2>::r;
};

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
struct GOOD_OR_BAD<0> {
    static const char *r;  
};

template<int N>
const char *GOOD_OR_BAD<N>::r = "yes";
const char *GOOD_OR_BAD<0>::r = "no";

template<int N>
struct score_jugde {
    static const char *r;
};

template<int N>
const char *score_jugde<N>::r = GOOD_OR_BAD<(N >= 60)>::r;

int main() {
    cout << score_jugde<60>::r << endl;
    cout << score_jugde<54>::r << endl;
    return 0;
}

ENDS(good_bad_test)

BEGINS(sum_test)

template<int N>
struct sum {
    static constexpr int r = (N + 1) * N / 2; 
};

int main() {
    cout << sum<5>::r << endl;
    cout << sum<7>::r << endl;
    cout << sum<100>::r << endl;
    return 0;
}

ENDS(sum_test)

BEGINS(is_prime_test)

template<int i, int N>
struct getNext {
    static constexpr int r = (N % i ? i + 1 : 0);
};

template<int i, int N>
struct test {
    static constexpr const char *r = ((i * i > N) ? "yes" : test<getNext<i, N>::r, N>::r);
};

template<int N>
struct test<0, N> {
    static constexpr const char *r = "no";
};

template<int N>
struct is_prime {
    static constexpr const char *r = test<2, N>::r;
};

int main() {
    cout << is_prime<2>::r << endl;
    cout << is_prime<3>::r << endl;
    cout << is_prime<5>::r << endl;
    cout << is_prime<8>::r << endl;
    cout << is_prime<103>::r << endl;
    return 0;
}

ENDS(is_prime_test)

int main() {
    even_test::main();
    good_bad_test::main();
    sum_test::main();
    is_prime_test::main();
    return 0;
}
