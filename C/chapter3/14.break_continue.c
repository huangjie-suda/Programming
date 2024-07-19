/*************************************************************************
	> File Name: 14.break_continue.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 24 Mar 2024 04:25:12 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", i + 1);
        if (i + 1 == 8) break;
    }
    printf("\n");
    for (int i =1; i <= n; i++) {
        if (i % 3 == 0) continue;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
