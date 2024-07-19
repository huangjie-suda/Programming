/*************************************************************************
	> File Name: 21.HZOJ-881.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 27 May 2024 01:45:09 PM CST
 ************************************************************************/

#include<stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return ;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
