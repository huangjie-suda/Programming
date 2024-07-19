/*************************************************************************
	> File Name: 6.test2.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 23 Mar 2024 11:19:08 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    switch (n) {
        case 1: printf("one\n"); break;
        case 2: printf("two\n"); break;
        case 3: printf("three\n"); break;
        default: printf("error\n"); break;
    }

    return 0;
}
