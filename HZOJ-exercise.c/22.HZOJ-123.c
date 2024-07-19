/*************************************************************************
	> File Name: 22.HZOJ-123.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 05 Apr 2024 03:38:09 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if ((c <= a && b <= d) || (a <= c && d <= b)) printf("YES\n");
    else printf("NO\n");
    return 0;
}
