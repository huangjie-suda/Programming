/*************************************************************************
	> File Name: 23.pointer_get_value.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 27 May 2024 03:09:51 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n = 0x61626364;
    char *p = (char *)&n;
    printf("*(p + 0) = %c\n", *(p + 0));
    printf("*(p + 1) = %c\n", *(p + 1));
    printf("*(p + 2) = %c\n", *(p + 2));
    printf("*(p + 3) = %c\n", *(p + 3));
    printf("p[0] = %c\n", p[0]);
    printf("p[1] = %c\n", p[1]);
    printf("p[2] = %c\n", p[2]);
    printf("p[3] = %c\n", p[3]);
    return 0;
}
