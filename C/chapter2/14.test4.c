/*************************************************************************
	> File Name: 14.test4.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 20 Mar 2024 01:51:07 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);
    printf("%lf^%lf = %lf\n", x, 1.0 / 3.0, pow(x, 1.0 / 3.0));
    return 0;
}
