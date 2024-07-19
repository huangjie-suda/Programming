/*************************************************************************
	> File Name: EP45.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 14 Jul 2024 05:33:51 PM CST
 ************************************************************************/

#include<stdio.h>

long long T(long long n) {
    return (n * (n + 1)) >> 1;
}

long long P(long long n) {
    return (n * (3 * n - 1)) >> 1;
}

long long H(long long n) {
    return n * (2 * n - 1);
}

int is_val(long long (*func)(long long), long long val) {
    long long head = 1, tail = val, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (func(mid) == val) return 1;
        if (func(mid) < val) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int main() {
    for (long long i = 144; ; i++) {
        if (!is_val(P, H(i))) continue;
        printf("%lld\n", H(i));
        break;
    }
    return 0;
}
