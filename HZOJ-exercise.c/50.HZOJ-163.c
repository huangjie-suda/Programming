/*************************************************************************
	> File Name: 50.HZOJ-163.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 23 Jul 2024 10:44:40 AM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, theta;
    scanf("%lf%lf%lf", &a, &b, &theta);
    c = sqrt(a * a + b * b - 2 * a * b * cos(theta / 180 * acos(-1)));
    printf("%.6lf\n", c);
    return 0;
}
