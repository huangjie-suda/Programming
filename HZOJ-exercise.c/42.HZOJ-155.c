/*************************************************************************
	> File Name: 42.HZOJ-155.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 21 Jul 2024 03:32:53 PM CST
 ************************************************************************/

#include<stdio.h>

int f(int n) {
    if (n == 1) return 3;
    return f(n - 1) + 2 * (n - 1);
}

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", f(i));
        sum += f(i);
    }
    printf("%d\n", sum);
    return 0;
}
