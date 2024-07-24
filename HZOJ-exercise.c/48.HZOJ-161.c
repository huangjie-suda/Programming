/*************************************************************************
	> File Name: 48.HZOJ-161.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 23 Jul 2024 10:26:52 AM CST
 ************************************************************************/

#include<stdio.h>

double f(int x, int n) {
    if (n == 0) return x;
    return f(x, n - 1) * (1 + 0.06);
}

int main() {
    int x, n;
    scanf("%d%d", &x, &n);
    printf("%.6lf\n", f(x, n));
    return 0;
}
