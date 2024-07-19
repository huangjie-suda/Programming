/*************************************************************************
	> File Name: 9.row_col_array.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 26 May 2024 01:38:52 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a[10][10];
    printf("&a[0][0] = %p\n", &a[0][0]);
    printf("&a[0][1] = %p\n", &a[0][1]);
    printf("&a[1][0] = %p\n", &a[1][0]);
    return 0;
}
