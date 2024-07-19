/*************************************************************************
	> File Name: 12.HZOJ-106.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 04 Apr 2024 04:25:30 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    double n;
    scanf("%lf", &n);
    if (n < 0) {
        printf("%g\n", -n);
    } else printf("%g\n", n);
    return 0;
}
