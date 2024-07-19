/*************************************************************************
	> File Name: EP07-test2.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 11 Jul 2024 09:53:42 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX_N 100

int prime[MAX_N + 5] = {0};
void init_prime() {
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = 1, I = MAX_N / i; j <= I; j++) {
            prime[i * j] = i;
        }
    }
    return ;
}

int main() {
    init_prime();
    for (int i = 2; i <= MAX_N; i++) {
        printf("max(%d) = %d\n", i, prime[i]);
    }
    return 0;
}
