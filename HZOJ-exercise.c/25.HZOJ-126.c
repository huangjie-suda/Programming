/*************************************************************************
	> File Name: 25.HZOJ-126.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 05 Apr 2024 09:00:55 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    double r1, r2;
    scanf("%lf%lf", &r1, &r2);
    printf("%.2lf\n", 3.14 * (r1 * r1 - r2 * r2));
    return 0;
}
