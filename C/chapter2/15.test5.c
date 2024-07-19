/*************************************************************************
	> File Name: 15.test5.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 20 Mar 2024 02:00:07 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>
int main() {
    double x;
    scanf("%lf", &x);
    printf("%lf\n", x / 180.0 * acos(-1));
    return 0;
}
