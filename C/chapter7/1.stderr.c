/*************************************************************************
	> File Name: 1.stderr.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 05 Jun 2024 02:57:27 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    printf("hello world\n"); // stdout
    int n;
    scanf("%d", &n); // stdin
    perror("out of range\n"); // stderr
    return 0;
}
