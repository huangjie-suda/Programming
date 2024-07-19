/*************************************************************************
	> File Name: 15.goto.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 24 Mar 2024 04:37:55 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    goto lab_1;
    printf("hello world\n");
lab_1:
    printf("hello hangzhou\n");
//--------------------//
    goto lab_2;
    int a = 0, b = 0;
    scanf("%d%d", &a, &b);
lab_2:
    printf("%d\n", a * b);
    return 0;
}
