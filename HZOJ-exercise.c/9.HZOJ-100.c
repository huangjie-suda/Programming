/*************************************************************************
	> File Name: 9.HZOJ-100.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 02 Apr 2024 03:08:05 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    double n, m = 0, s;
    scanf("%lf", &n);
    for (int i = 0; i < 6; i++) {
        s = m + n;
        m = s * (1 + 0.00417);
    }
    printf("$%.2lf\n", m);
    return 0;
}
