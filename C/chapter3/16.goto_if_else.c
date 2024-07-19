/*************************************************************************
	> File Name: 16.goto_if_else.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 25 Mar 2024 10:16:01 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    n % 2 == 0 && ({ goto if_stmt; 1; });
    !(n % 2 == 0) && ({ goto else_stmt; 1; });
if_stmt:
    printf("%d is even\n", n);
    goto if_end;
else_stmt:
    printf("%d is odd\n", n);
if_end:
    return 0;
}
