/*************************************************************************
	> File Name: 7.scanf_c.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 05 Jun 2024 04:21:22 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    char c1, c2;
    int a, b;
    scanf("%d", &a);
    scanf("%c%c", &c1, &c2);
    scanf("%d", &b);
    printf("a = %d, b = %d\n", a, b);
    printf("c1 = %d, c2 = %d\n", c1, c2);
    return 0;
}
