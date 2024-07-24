/*************************************************************************
	> File Name: 45.HZOJ-158.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 22 Jul 2024 10:28:47 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n + 1; i++) {
        int a_num = 2 * abs(i - n) + 1;
        int b_num = n - abs(i - n);
        for (int j = 0; j < b_num; j++) printf(" ");
        for (int k = 0; k < a_num; k++) {
            if (abs(k - a_num / 2) == a_num / 2) printf("%d", abs(n - i));
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
