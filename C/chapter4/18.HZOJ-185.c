/*************************************************************************
	> File Name: 18.HZOJ-185.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 31 Mar 2024 11:54:38 AM CST
 ************************************************************************/

#include<stdio.h>

int f(int n) {
    if (n <= 2) return 1;
    return f(n - 1) + f(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}
