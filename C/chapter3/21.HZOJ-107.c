/*************************************************************************
	> File Name: 21.HZOJ-107.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 25 Mar 2024 03:10:37 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", n % 7 == 0 && n % 2 != 0 ? "YES" : "NO");
    return 0;
}
