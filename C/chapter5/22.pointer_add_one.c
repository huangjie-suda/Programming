/*************************************************************************
	> File Name: 22.pointer_add_one.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 27 May 2024 02:05:40 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, *p1 = &a;
    double b, *p2 = &b;
    printf("&a = %p\n", &a);
    printf("p1 + 0 = %p\n", p1 + 0);
    printf("p1 + 1 = %p\n", p1 + 1);
    printf("p1 + 2 = %p\n", p1 + 2);
    printf("p1 + 3 = %p\n", p1 + 3);
    printf("&b = %p\n", &b);
    printf("p2 + 0 = %p\n", p2 + 0);
    printf("p2 + 1 = %p\n", p2 + 1);
    int arr[4] = {1, 2, 3, 4};
    int *p3 = arr;
    for (int i = 0; i < 4; i++) {
        printf("p3 + %d = %p\n", i, p3 + i);
        printf("&arr[%d] = %p\n", i, &arr[i]);
    } 
    int (*p4)[10] = 0x0;
    int arr2[30][10];
    p4 = arr2;
    printf("p4 + 0 = %p\n", p4 + 0);
    printf("p4 + 1 = %p\n", p4 + 1);
    printf("p4 + 2 = %p\n", p4 + 2);
    int *p5[10]; // 10个指针(每个指针存储一个整型变量地址)的数组
    int *(*p6[10])[20]; // 10个指针(每个指针存储20个整型变量地址)的数组
    return 0;
}
