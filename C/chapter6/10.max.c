/*************************************************************************
	> File Name: 10.max.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 31 May 2024 02:20:12 PM CST
 ************************************************************************/

#include<stdio.h>

#define P(func) { \
    printf("%s = %d\n", #func, func); \
}

#define MAX(a, b) ({ \
    int __a = (a), __b = (b); \
    __a > __b ? __a : __b; \
})

int main() {
    P(MAX(2, 3));
    P(5 + MAX(2, 3));
    P(MAX(2, MAX(3, 4)));
    P(MAX(2, 3 > 4 ? 3 : 4));
    int a = 7;
    P(MAX(a++, 6));
    printf("after max a = %d\n", a);
    return 0;
}
