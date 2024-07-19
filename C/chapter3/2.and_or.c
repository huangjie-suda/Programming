/*************************************************************************
	> File Name: 2.and_or.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 22 Mar 2024 03:59:24 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    a < b && printf("YES\n");
    !(a < b) && printf("NO\n");
    return 0;
}
