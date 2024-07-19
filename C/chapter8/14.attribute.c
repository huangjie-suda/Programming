/*************************************************************************
	> File Name: 14.attribute.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 11 Jun 2024 05:02:20 PM CST
 ************************************************************************/

#include<stdio.h>

int arr[10];

__attribute__((constructor)) 
void test1() {
    arr[0] = 100;
    return ;
}

__attribute__((constructor)) 
void test2() {
    arr[1] = 99;
    return ;
}

__attribute__((constructor)) 
void test3() {
    arr[2] = 10086;
    return ;
}

int main() {
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
