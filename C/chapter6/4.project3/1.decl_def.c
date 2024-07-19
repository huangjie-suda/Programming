/*************************************************************************
	> File Name: 4.decl_def.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 29 May 2024 04:58:20 PM CST
 ************************************************************************/

#include<stdio.h>

int add(int, int);

extern int c, d;

int main() {
    int a = 1, b = 2;
    printf("a + b + c + d = %d\n", a + b + c + d);
    return 0;
}

int add(int a, int b) {
    return a + b;
}
