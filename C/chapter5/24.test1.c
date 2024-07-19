/*************************************************************************
	> File Name: 24.test1.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 27 May 2024 03:30:52 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);
    unsigned int n;
    char *p = (char *)&n;
    p[3] = a;
    p[2] = b;
    p[1] = c;
    p[0] = d;
    printf("n = %u\n", n);
    return 0;
}
