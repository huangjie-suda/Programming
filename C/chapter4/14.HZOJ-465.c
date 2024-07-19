/*************************************************************************
	> File Name: 14.HZOJ-465.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 31 Mar 2024 11:21:42 AM CST
 ************************************************************************/

#include<stdio.h>

int digit(long long n, long long k) {
    if (k == 1) return n % 10;
    return digit(n / 10, k - 1);
}

int main() {
    long long n, k;
    scanf("%lld%lld", &n, &k);
    printf("%d\n", digit(n, k));
    return 0;
}
