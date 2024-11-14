/*************************************************************************
	> File Name: 2.obj_size.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 05 Oct 2024 03:23:54 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define P(class_name) { \
    printf("class %s : %lu\n", #class_name, sizeof(class_name)); \
}

class Base {
public :
    Base() : x(0x1111111111111111LL) {}
    long long x;
};

class A : public Base {
public :
    A() : y(0x22222222) {}
    int y;
};

void output_address(void *_p,  size_t n) {
    unsigned char *p = (unsigned char *)(_p);
    printf("%p : ", p);
    for (int i = 0; i < n; i++) {
        if (i % 8 == 0) printf("\n");
        printf("%02X ", p[i]);
    }
    printf("\n");
    return ;
}

int main() {
    P(Base);
    P(A);
    A a;
    output_address(&a, sizeof(a));
    return 0;
}
