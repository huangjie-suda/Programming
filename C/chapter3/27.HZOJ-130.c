/*************************************************************************
	> File Name: 27.HZOJ-130.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 25 Mar 2024 04:40:22 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int m, n;
    double yu = 0;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < n; i++) {
        yu += m;
        yu *= 1.00417;
    }
    printf("$%.2lf\n", yu);
    return 0;
}
