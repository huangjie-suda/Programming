/*************************************************************************
	> File Name: 44.HZOJ-157.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 22 Jul 2024 04:20:08 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i++) {
        int a_num = 2 * abs(i - n) + 1;
        int b_num = n - abs(i - n) - 1;
        char ch = 'A' + n - 1;
        for (int i = 0; i < b_num; i++) printf(" ");
        for (int j = 0; j < a_num; j++) printf("%c", ch - abs(j - a_num / 2));
        printf("\n");
    }
    return 0;
}
