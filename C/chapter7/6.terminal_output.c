/*************************************************************************
	> File Name: 6.terminal_output.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 05 Jun 2024 03:57:46 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    freopen("/dev/pts/2", "w", stdout);
    char s[1000];
    while (scanf("%s", s) != EOF) {
        printf("from pts1 : %s\n", s);
    }
    return 0;
}
