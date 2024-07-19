/*************************************************************************
	> File Name: 31.HZOJ-134.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 06 Apr 2024 01:20:34 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c = 0;
    scanf("%d%d", &a, &b);
    for (int i = 0; i <= b; i += 11) {
        if (c) printf(" ");
        if (i >= a) c += printf("%d", i);
    }
    printf("\n");
    return 0;
}
