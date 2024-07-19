/*************************************************************************
	> File Name: EP12-1.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 15 Jul 2024 03:03:21 PM CST
 ************************************************************************/

#include<stdio.h>

long long f(long long n) {
    return n * (n + 1) >> 1; 
}

int main() {
    int sum = 0;
    for (long long i = 2; ; i++) {
        sum = 0;
        for (long long j = 1; j * j <= f(i); j++) {
            if (f(i) % j == 0) sum += 2;
            if (j * j == f(i)) sum -= 1;
            if (sum > 500) {
                printf("%lld\n", f(i));
                break;
            }
        }
        if (sum > 500) break;
    }
    return 0;
}
