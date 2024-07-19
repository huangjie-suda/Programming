/*************************************************************************
	> File Name: 34.HZOJ-141.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 27 Mar 2024 02:55:51 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n + 1; i++) {
        int a_num = 1 + 2 * abs(i - n);
        int b_num = n - abs(i - n);
        char ch = 'A' + n;
        for (int j = 0; j < b_num; j++) printf(" ");
        for (int j = 0; j < a_num; j++) {
                char chr = ch - abs(j - (a_num - 1) / 2);
                printf("%c", chr);
        } printf("\n");    
    }
    return 0;
}
