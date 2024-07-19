/*************************************************************************
	> File Name: 7.sscanf.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 18 Mar 2024 02:04:58 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char s[100] = "123 456 789";
    int a, b, c;
    sscanf(s, "%d%d%d", &a, &b, &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}
