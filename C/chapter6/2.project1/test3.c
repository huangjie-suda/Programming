/*************************************************************************
	> File Name: test3.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 29 May 2024 04:38:14 PM CST
 ************************************************************************/

#include<stdio.h>

int add(int, int);

int main() {
    int a = 123, b = 456;
    printf("a + b = %d", a + b);
    printf("add(%d, %d) = %d\n", a, b, add(a, b));
    return 0;
}
