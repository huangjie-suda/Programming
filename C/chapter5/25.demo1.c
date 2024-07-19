/*************************************************************************
	> File Name: 25.demo1.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 27 May 2024 03:53:13 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    int *p = arr;
    for (int i = 0; i < 3; i++) {
        printf("%d\n", (i + 5)[&p[1] - 2]);
    }
    return 0;
}
