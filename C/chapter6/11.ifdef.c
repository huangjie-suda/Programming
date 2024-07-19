/*************************************************************************
	> File Name: 11.ifdef.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 31 May 2024 03:03:34 PM CST
 ************************************************************************/

#include<stdio.h>

#ifndef DEBUG
#define DEBUG
#endif

#ifdef DEBUG
int a = 1;
#else
int a = 2;
#endif

int main() {
    printf("a = %d\n", a);
    return 0;
}
