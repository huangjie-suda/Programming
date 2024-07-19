/*************************************************************************
	> File Name: 20.HZOJ-103.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 25 Mar 2024 03:00:19 PM CST
 ************************************************************************/

#include<stdio.h>
 
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%s\n", a % b == 0 ? "YES" : "NO");
    return 0;
}
