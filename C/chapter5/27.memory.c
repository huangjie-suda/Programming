/*************************************************************************
	> File Name: 27.memory.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 28 May 2024 01:51:17 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *arr1 = (int *)malloc(sizeof(int) * 10);
    for (int i = 0; i < 10; i++) {
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }
    int *arr2 = (int *)calloc(10, sizeof(int));
    for (int i = 0; i < 10; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }
    free(arr1);
    free(arr2);
    char s1[100] = "hello world";
    char s2[100];
    char s3[100];
    memcpy(s2, s1, 12);
    memmove(s3, s1, 12);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);
    memcpy(s2 + 6, s2, 12);
    memmove(s3 + 6, s3, 12);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);
    return 0;
}
