/*************************************************************************
	> File Name: 47.HZOJ-160.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 23 Jul 2024 09:28:52 AM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    double r, h, s;
    scanf("%lf%lf", &r, &h);
    s = 7.14 * r * r + (3.14 * r + 2 * r + sqrt(2) * 2 * r) * h;
    printf("%.2lf\n", s);
    return 0;
}
