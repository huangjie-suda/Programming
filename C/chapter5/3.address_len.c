/*************************************************************************
	> File Name: 3.address_len.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 01 Apr 2024 11:40:03 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a;
    double b;
    char c;
    printf("sizeof(int &) = %lu\n", sizeof(&a));
    printf("sizeof(double &) = %lu\n", sizeof(&b));
    printf("sizeof(char &) = %lu\n", sizeof(&c));
    return 0;
}
