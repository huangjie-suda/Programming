/*************************************************************************
	> File Name: 30.HZOJ-133.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 06 Apr 2024 01:08:44 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (j > i) printf("\t");
            printf("%d*%d=%d", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
