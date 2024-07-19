/*************************************************************************
	> File Name: 24.HZOJ-125.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 05 Apr 2024 04:01:42 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int h, m, s, t, miao;
    double l, a = 1.00;
    scanf("%d%d%d%d", &h, &m, &s, &t);
    miao = h * 3600 + m * 60 + s + t;
    m = miao % 3600 / 60;
    s = miao % 60;
    l = a * t / 86400 * 100;
    char str[10] = "%";
    if (miao / 3600 % 24 == 0) {
        h = 12;
        printf("%d:%d:%dam\n", h, m, s);
        printf("%.2lf%s\n", l, str);
    } else if (miao / 3600 % 24 < 12) {
        h = miao / 3600 % 24;
        printf("%d:%d:%dam\n", h, m, s);
        printf("%.2lf%s\n", l, str);
    } else if (miao / 3600 % 24 == 12) {
        h = 12;
        printf("%d:%d:%dpm\n", h, m, s);
        printf("%.2lf%s\n", l, str);
    } else {
        h = miao / 3600 % 12;
        printf("%d:%d:%dpm\n", h, m, s);
        printf("%.2lf%s\n", l, str);
    }
    return 0;
}
