/*************************************************************************
	> File Name: 19.one_stmt.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 25 Mar 2024 11:12:36 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n = 5;
    while (n--) if (1) {
        printf("hello world\n");
        printf("hello hangzhou\n");
    }
    for (int i = 0; i < 10; i++) ;{
        printf("one two\n");
        printf("one two\n");
        printf("one two\n");
    }
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
    return 0;
}
