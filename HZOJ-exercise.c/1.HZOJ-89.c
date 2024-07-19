/*************************************************************************
	> File Name: 1.HZOJ-89.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 02 Apr 2024 02:29:41 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, shi, ge;
    scanf("%d", &a);
    shi = a % 100 / 10;
    ge = a % 10;
    printf("%d\n", shi);
    printf("%d\n", ge);
    return 0;
}
