/*************************************************************************
	> File Name: 24.HZOJ-102.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 20 Mar 2024 04:30:52 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    double a, b, c, t;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &t);
    printf("%.2lf\n", (1 - t / a - t / b) / (1 / a + 1 / b - 1 / c) + t);
    return 0;
}
