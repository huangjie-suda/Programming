/*************************************************************************
	> File Name: 10.HZOJ-104.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 04 Apr 2024 04:14:54 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, bai, shi, ge;
    scanf("%d", &a);
    ge = a % 10;
    shi = a % 100 / 10;
    bai = a % 1000 / 100;
    if (ge == 9 || shi == 9 || bai == 9) {
        printf("YES\n");
    } else printf("NO\n");

    return 0;
}
