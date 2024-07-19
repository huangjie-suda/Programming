/*************************************************************************
	> File Name: 2.printf.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 15 Mar 2024 03:05:03 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n1, n2;
    n1 = printf("hello world\n");
    printf("%d\n", '\n');
    int a = 123;
    n2 = printf("hello world : %d\n", a);
    printf("n1 = %d, n2 = %d\n", n1, n2);
    return 0;
}
