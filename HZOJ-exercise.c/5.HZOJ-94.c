/*************************************************************************
	> File Name: 5.HZOJ-94.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 02 Apr 2024 02:45:06 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    double w, h, BMI;
    scanf("%lf%lf", &w, &h);
    BMI = w / (h * h);
    printf("%.2lf\n", BMI);
    return 0;
}
