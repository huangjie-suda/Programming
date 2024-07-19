/*************************************************************************
	> File Name: 26.HZOJ-127.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 05 Apr 2024 09:06:35 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    double x, n, m;
    scanf("%lf%lf", &x, &n);
    for (int i = 0; i < n; i++) {
        m = x * 1.06;
        x = m;
    }
    printf("%g\n", floor(x));
    return 0;
}
