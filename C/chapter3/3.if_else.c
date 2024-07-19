/*************************************************************************
	> File Name: 3.if_else.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 22 Mar 2024 04:18:44 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d", &a, &b);
    if (a < b) printf("YES\n");
    else printf("NO\n");

    if (a < b) {
        c = a * b;
        printf("c = %d\n", c);
    }
    return 0;
}
