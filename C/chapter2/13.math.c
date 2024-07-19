/*************************************************************************
	> File Name: 13.math.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 18 Mar 2024 04:51:12 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf("pow(2, 3) = %lf\n", pow(2.0, 3.0));
    printf("sqrt(2) = %lf\n", sqrt(2));
    printf("ceil(4.01) = %lf\n", ceil(4.01));
    printf("floor(4.99) = %lf\n", floor(4.99));
    printf("abs(-65) = %d\n", abs(-65));
    printf("fabs(-65.6) = %lf\n", fabs(-65.6));
    printf("acos(-1) = %lf\n", acos(-1));
    return 0;
}
