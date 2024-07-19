/*************************************************************************
	> File Name: 16.HZOJ-467.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 31 Mar 2024 11:43:16 AM CST
 ************************************************************************/

#include<stdio.h>

long long f(int n) {
    if (n == 1) return 1;
    return n * f(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", f(n));
    return 0;
}
