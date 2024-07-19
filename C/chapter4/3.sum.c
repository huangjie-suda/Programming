/*************************************************************************
	> File Name: 3.sum.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 29 Mar 2024 03:27:25 PM CST
 ************************************************************************/

#include<stdio.h>

int sum(int a1, int r, int d) {
    int n = (r - a1) / d + 1;
    int an = a1 + (n - 1) * d;
    return (a1 + an) * n / 2;
}

int main() {
    printf("%d %d %d\n", sum(1, 100, 1), sum(1, 100, 2), sum(26, 36999, 47));
    return 0;
}
