/*************************************************************************
	> File Name: 2.hex.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 01 Apr 2024 11:20:32 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a = 0x6a;
    printf("a(10) = %d\n", a);
    printf("a(16) = %x\n", a);
    printf("a(16) = %X\n", a);
    int max_int = 0x7fffffff;
    int min_int = 0x80000000;
    printf("MAX_INT : %d\n", max_int);
    printf("MIN_INT : %d\n", min_int);
    printf("input hex : ");
    scanf("%x", &a);
    printf("a(10) = %d\n", a);
    printf("a(16) = %x\n", a);
    printf("a(16) = %X\n", a);
    return 0;
}
