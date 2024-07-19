/*************************************************************************
	> File Name: 3.scanf_printf.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 13 Mar 2024 12:49:39 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int a, b, c, d;
    int ret_scanf = scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("ret_scanf = %d\n, ret_printf = %d", ret_scanf, \
           printf("%d, %d, %d, %d\n", a, b, c, d));
    return 0;
}
