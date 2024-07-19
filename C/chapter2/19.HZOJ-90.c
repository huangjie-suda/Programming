/*************************************************************************
	> File Name: 19.HZOJ-90.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 20 Mar 2024 03:08:00 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int bai, shi, ge;
    bai = a / 100;
    shi = a % 100 / 10;
    ge = a % 10;
    printf("%d\n%d\n%d\n", bai, shi, ge);
    return 0;
}
