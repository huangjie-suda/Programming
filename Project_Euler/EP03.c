/*************************************************************************
	> File Name: EP03.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 10 Jul 2024 03:13:34 PM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N 600851475143LL

int main() {
    long long ans = 0, i = 2, N = MAX_N;
    while (i * i <= N) {
        if (N % i == 0) ans = i;// ans 一定是素数
        while (N % i == 0) N /= i;
        i += 1;
    }
    if (N != 1) ans = N;
    printf("%lld\n", ans);// 这里为什么一定要判断呢
    return 0;
}
