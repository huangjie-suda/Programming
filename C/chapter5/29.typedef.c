/*************************************************************************
	> File Name: 29.typedef.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 28 May 2024 02:44:44 PM CST
 ************************************************************************/

#include<stdio.h>

typedef long long LL;
typedef int (*Arr2Dim10)[10];
typedef void (*Func)();

void test() {
    printf("hello function pointer\n");
    return ;
}

int main() {
    LL a;
    printf("sizeof(a) = %lu\n", sizeof(a));
    int arr[5][10];
    Arr2Dim10 p = arr;
    Func p2 = test;
    p2();
    return 0;
}
