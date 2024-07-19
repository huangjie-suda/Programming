/*************************************************************************
	> File Name: EP07-3.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 11 Jul 2024 10:59:52 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX_N 200000

int prime[MAX_N + 5] = {0};
void init_prime() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    init_prime();
    printf("%d\n", prime[10001]);
    return 0;
}
