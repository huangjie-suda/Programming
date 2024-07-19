/*************************************************************************
	> File Name: EP12-1.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 15 Jul 2024 03:33:51 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

long long triangle(long long n) {
    return (n + 1) * n >> 1;
}

int get_factor(long long val) {
    int cnt = 0, I = sqrt(val);
    for (int i = 1; i <= I; i++) {
        if (val % i == 0) cnt += 2;
    }
    if (I * I == val) cnt--;
    return cnt;
}

int main() {
    int n = 7;
    while (1) {
        n++;
        long long val = triangle(n);
        if (get_factor(val) <= 500) continue;
        printf("%lld\n", val);
        break;
    }
    return 0;
}
