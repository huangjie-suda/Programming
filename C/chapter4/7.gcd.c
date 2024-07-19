/*************************************************************************
	> File Name: 7.gcd.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 30 Mar 2024 11:53:23 AM CST
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF) {
        printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
    }
    return 0;
}
