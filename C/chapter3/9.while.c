/*************************************************************************
	> File Name: 9.while.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 24 Mar 2024 02:40:34 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    // 1 - n
    int n, i = 0;
    scanf("%d", &n);
    printf("program 1 : \n");
    while (i < n) {
        printf("%d\n", i + 1); // 0 ~ (n - 1) ---> 1 ~ n
        i += 1;
    }
    printf("\n");
    printf("program 2 : \n");
    i = 1;
    while (i <= n) {
        printf("%d\n", i);
        i += 1;
    }
    printf("program 3 : \n");
    i = 1;
    while (i <= n) printf("%d\n", i++);
    printf("program 4 : \n");
    i = 0;
    while (i < n) printf("%d\n", ++i);
    return 0;
}
