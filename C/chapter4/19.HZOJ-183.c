/*************************************************************************
	> File Name: 19.HZOJ-183.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 31 Mar 2024 11:58:01 AM CST
 ************************************************************************/

#include<stdio.h>

int f(int x) {
    if (x <= 0) return 0;
    if (x == 1) return 1;
    if (x % 2 == 0) return 3 * f(x / 2) - 1;
    return 3 * f((x + 1) / 2) - 1;
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", f(x));
    return 0;
}
