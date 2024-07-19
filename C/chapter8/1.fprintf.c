/*************************************************************************
	> File Name: 1.fprintf.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 07 Jun 2024 02:22:18 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("failed to open file\n");
        exit(1);
    }
    fprintf(fp, "hello world\n");
    int a = 123, b = 456;
    fprintf(fp, "a = %d, b = %d\n", a, b);
    fclose(fp);
    return 0;
}
