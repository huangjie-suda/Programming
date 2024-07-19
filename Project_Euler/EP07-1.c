/*************************************************************************
	> File Name: EP07-1.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 11 Jul 2024 10:42:36 AM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

#define MAX_N 10001

int is_prime(int n) {
    for (int i = 2, I = sqrt(n); i <= I; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int cnt = 0;
    for (int i = 2; ; i++) {
        if (!is_prime(i)) continue;
        cnt += 1;
        if (cnt == MAX_N) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
