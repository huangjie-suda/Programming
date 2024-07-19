/*************************************************************************
	> File Name: 12.assign.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 18 Mar 2024 04:42:32 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4;
    a = b = c = d;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    return 0;
}
