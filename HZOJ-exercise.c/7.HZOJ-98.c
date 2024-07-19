/*************************************************************************
	> File Name: 7.HZOJ-98.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 02 Apr 2024 02:55:03 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    double r, h, s, v;
    scanf("%lf%lf", &r, &h);
    s = r * r * 3.14;
    v = s * h;
    printf("%.2lf\n", s);
    printf("%.2lf\n", v);
    return 0;
}
