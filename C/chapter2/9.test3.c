/*************************************************************************
	> File Name: 9.test3.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 18 Mar 2024 02:26:42 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char s[100], t[100];
    scanf("%[^\n]", s);
    int n = 0;
    n = sprintf(t, "| %s |", s);
    for (int i = 0; i < n; i++) printf("-");
    printf("\n");
    printf("| %s |\n", s);
    for (int i = 0; i < n; i++) printf("-");
    printf("\n");
    return 0;
}
