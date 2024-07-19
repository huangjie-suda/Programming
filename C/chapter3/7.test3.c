/*************************************************************************
	> File Name: 7.test3.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 23 Mar 2024 11:24:46 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    switch (n) {
        case 1: printf("one ");
        case 2: printf("two ");
        case 3: printf("three\n"); break;
        default: printf("error\n"); break;
    }

    return 0;
}
