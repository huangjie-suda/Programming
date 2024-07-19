/*************************************************************************
	> File Name: 28.const.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 28 May 2024 02:23:06 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    const int a = 123;
    const int b = 456;
    const int *p1 = &a;
    printf("*p1 = %d\n", *p1);
    p1 = &b;
    printf("*p1 = %d\n", *p1);
    int const *p2 = &a;
    int n = 789, m = 1000;
    int *const p3 = &n;
    return 0;
}
