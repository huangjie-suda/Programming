/*************************************************************************
	> File Name: 3.scanf.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 15 Mar 2024 03:22:23 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, n;
    printf("normal scanf, input a, b: ");
    n = scanf("%d%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    printf("n = %d\n", n);
    printf("format scanf, input %%dabc%%d: ");
    n = scanf("%dabc%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    printf("EOF = %d\n", EOF);
    return 0;
}
