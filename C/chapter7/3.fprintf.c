/*************************************************************************
	> File Name: 3.fprintf.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 05 Jun 2024 03:18:32 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    fprintf(stdout, "hello world\n");
    int n;
    fscanf(stdin, "%d", &n);
    fprintf(stderr, "n = %d\n", n);
    return 0;
}
