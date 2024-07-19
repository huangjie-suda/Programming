/*************************************************************************
	> File Name: 10.do_while.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 24 Mar 2024 03:01:39 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, m = 0;
    scanf("%d", &n);
    do {
        n /= 10;
        m += 1;
    } while (n);;
    printf("digits : %d\n", m);
    return 0;
}
