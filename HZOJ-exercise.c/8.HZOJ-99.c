/*************************************************************************
	> File Name: 8.HZOJ-99.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 02 Apr 2024 03:00:56 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    double v, a, l;
    scanf("%lf%lf", &v, &a);
    l = (v * v) / (2 * a);
    printf("%.2lf\n", l);
    return 0;
}
