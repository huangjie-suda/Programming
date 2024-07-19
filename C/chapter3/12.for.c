/*************************************************************************
	> File Name: 12.for.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 24 Mar 2024 03:37:09 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i += 1) {
        printf("%d ", i + 1 );
    }
    printf("\n");
    for (i = 1; i <= n; i += 1) {
        printf("%d ", i);
    }
    printf("\n");
    for (i = 0; ; i += 1) {
        if (i == n) break;
        printf("%d ", i + 1);

    }
    printf("\n");
    return 0;
}
