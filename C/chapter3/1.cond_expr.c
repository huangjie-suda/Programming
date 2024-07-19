/*************************************************************************
	> File Name: 1.cond_expr.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 22 Mar 2024 03:31:59 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("a == b (%d)\n",    a == b);
    printf("a != b (%d)\n",    a != b);
    printf("a < b (%d)\n",     a < b);
    printf("a > b (%d)\n",     a > b);
    printf("a <= b (%d)\n",    a <= b);
    printf("a >= b (%d)\n",    a >= b);
    printf("!(a == b) (%d)\n", !(a == b));
    a += (a == b);
    printf("a = %d\n", a);
    printf("a < b && a == 3 (%d)\n", a < b && a == 3);
    printf("a < b || a == 3 (%d)\n", a < b || a == 3);
    printf("1 && 1 (%d)\n", 1 && 1);
    printf("1 && 0 (%d)\n", 1 && 0);
    printf("0 && 1 (%d)\n", 0 && 1);
    printf("0 && 0 (%d)\n", 0 && 0);
    printf("1 || 1 (%d)\n", 1 || 1);
    printf("1 || 0 (%d)\n", 1 || 0);
    printf("0 || 1 (%d)\n", 0 || 1);
    printf("0 || 0 (%d)\n", 0 || 0);
    return 0;
}
