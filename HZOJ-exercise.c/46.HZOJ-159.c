/*************************************************************************
	> File Name: 46.HZOJ-159.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 22 Jul 2024 10:44:09 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch[10];
    scanf("%c", ch);
    int n = (int)ch[0] - 'A' + 1;
    for (int i = 0; i < n; i++) {
        int a_num = 2 * abs(i - n) - 1;
        int b_num = n - abs(i - n);
        for (int j = 0; j < b_num; j++) printf(" ");
        for (int k = 0; k < a_num; k++) {
            if (k <= a_num / 2) printf("%c", ch[0] - i - k);
            else printf("%c", 'A' + k - a_num / 2 - 1);
        }
        printf("\n");
    }
    return 0;
}
