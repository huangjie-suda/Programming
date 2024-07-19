/*************************************************************************
	> File Name: EP34.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 10 Jul 2024 10:32:38 AM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N 2540160

int fac[10] = {1};
void init_fac() {
    for (int i = 1; i < 10; i++) {
        fac[i] = fac[i - 1] * i;
    }
    return ;
}

int is_val(int n) {
    int temp = 0, x = n;
    while (x) {
        temp += fac[x % 10];
        x /= 10;
    }
    return temp == n;
}

int main() {
    init_fac();
    int sum = 0;
    for (int i = 3; i < MAX_N; i++) {
        if (!is_val(i)) continue;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
