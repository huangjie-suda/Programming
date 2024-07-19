/*************************************************************************
	> File Name: 4.test.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 22 Mar 2024 04:33:02 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) printf("HEHE\n");
    else if (n < 60) printf("FAIL\n");
    else if (n < 75) printf("MEDIUM\n");
    else printf("GOOD\n");
    return 0;
}
