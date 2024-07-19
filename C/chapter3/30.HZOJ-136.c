/*************************************************************************
	> File Name: 28.HZOJ-136.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 25 Mar 2024 04:46:43 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 7; i <= n; i += 7) {
        printf("%d\n", i);
    }
    return 0;
}
