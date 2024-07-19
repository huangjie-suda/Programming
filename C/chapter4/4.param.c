/*************************************************************************
	> File Name: 4.param.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 29 Mar 2024 03:53:37 PM CST
 ************************************************************************/

#include<stdio.h>

void test(int a, int b) {
    a += 1;
    b *= 2;
    printf("test: a = %d, b = %d\n", a, b);
    return ;
}

int main() {
    int a = 1, b = 2;
    test(a, b);
    printf("main: a = %d, b = %d\n", a, b);
    test(b, a);
    printf("main: a = %d, b = %d\n", a, b);
    return 0;
}
