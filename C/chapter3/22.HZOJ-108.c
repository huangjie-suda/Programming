/*************************************************************************
	> File Name: 22.HZOJ-108.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 25 Mar 2024 03:22:11 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char s[10];
    double n, m;
    scanf("%s", s);
    scanf("%lf%lf", &n, &m);
    printf("%.2lf\n", s[0] == 'r' ? n * m : n * m / 2.0);
    return 0;
}
