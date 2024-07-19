/*************************************************************************
	> File Name: 13.HZOJ-109.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 04 Apr 2024 05:04:11 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, qian, bai, shi, ge;
    scanf("%d", &n);
    qian = n % 10000 / 1000;
    bai = n % 1000 / 100;
    shi = n % 100 / 10;
    ge = n % 10;
    if (qian % 2 && bai % 2 && shi % 2 && ge % 2) {
        printf("NO\n");
    } else printf("YES\n");
    return 0;
}
