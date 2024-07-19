/*************************************************************************
	> File Name: 31.HZOJ-137.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 27 Mar 2024 01:47:17 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    char ch = 'A';
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c", ch);
            ch += 1;
        }
        printf("\n");
    }       
    return 0;
}
