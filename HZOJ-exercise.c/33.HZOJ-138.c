/*************************************************************************
	> File Name: 33.HZOJ-138.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 06 Apr 2024 07:39:43 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a_num = 2 * n - 2 * i;
        for (int j = 0; j < a_num; j++) printf("A");
        printf("\n");
    }
    return 0;
}
