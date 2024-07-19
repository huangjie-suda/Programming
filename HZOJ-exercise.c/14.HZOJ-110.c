/*************************************************************************
	> File Name: 14.HZOJ-110.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 04 Apr 2024 05:10:50 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    double X;
    scanf("%lf", &X);
    if (X <= 15) {
        printf("%.2lf\n", 6 * X);
    } else printf("%.2lf\n", 90 + 9 * (X - 15));
    return 0;
}
