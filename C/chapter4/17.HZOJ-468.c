/*************************************************************************
	> File Name: 17.HZOJ-468.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 31 Mar 2024 11:49:46 AM CST
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", gcd(a, b));
    return 0;
}
