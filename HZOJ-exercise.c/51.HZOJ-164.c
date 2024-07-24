/*************************************************************************
	> File Name: 51.HZOJ-164.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 23 Jul 2024 10:53:23 AM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    double n, m;
    scanf("%lf%lf", &n, &m);
    double ans = n / m; 
    printf("%g\n", ceil(ans));
    return 0;
}
