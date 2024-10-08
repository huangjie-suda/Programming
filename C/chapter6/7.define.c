/*************************************************************************
	> File Name: 7.define.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 31 May 2024 01:26:49 PM CST
 ************************************************************************/

#include<stdio.h>

#define PI 3.1415926
#define S(a, b) a * b
#define P(a) { \
    printf("define P : %d\n", a); \
}

int main() {
    printf("PI = %lf\n", PI);
    printf("S(3, 4) = %d\n", S(3, 4));
    printf("S(3 + 7, 4) = %d\n", S(3 + 7, 4));
    S(int, p);
    int n = 123;
    p = &n;
    P(*p);
    return 0;
}
