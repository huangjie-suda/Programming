/*************************************************************************
	> File Name: 26.HZOJ-128.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 25 Mar 2024 04:30:02 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0, a; i < n; i++) {
        scanf("%d", &a);
        sum += a;
    }
    printf("%.2lf\n", 1.0 * sum / n);
    return 0;
}
