/*************************************************************************
	> File Name: 6.test2.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 18 Mar 2024 01:43:24 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char s[100];
    scanf("%[^\n]", s);
    int n;
    n = printf("%s", s);
    printf(" : %d\n", n);
    return 0;
}
