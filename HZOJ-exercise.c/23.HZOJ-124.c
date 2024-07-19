/*************************************************************************
	> File Name: 23.HZOJ-124.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 05 Apr 2024 03:45:03 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if ((a || b <= 50) && (c <= 25 || d >= 5)) printf("ok\n");
    else printf("pass\n");
    return 0;
}
