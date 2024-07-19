/*************************************************************************
	> File Name: gcd.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 10 Jul 2024 04:04:32 PM CST
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
    return 0;
}
