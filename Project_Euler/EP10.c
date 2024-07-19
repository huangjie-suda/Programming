/*************************************************************************
	> File Name: EP10.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 12 Jul 2024 09:42:26 AM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 2000000

int prime[MAX_N + 5] = {0};
void init_prime() {
    for (int i = 2; i < MAX_N; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i >= MAX_N) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    init_prime();
    long long sum = 0;
    for (int i = 1; i <= prime[0]; i++) {
        sum += prime[i];
    }
    printf("%lld\n", sum);
    return 0;
}
