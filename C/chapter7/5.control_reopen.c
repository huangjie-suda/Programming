/*************************************************************************
	> File Name: 5.control_reopen.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 05 Jun 2024 03:42:45 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char s[1000];
    int i = 1;
    while (scanf("%[^\n]", s) != EOF) {
        getchar();
        fprintf(stderr, "%d test case\n", i++);
        printf("%s | hello world\n", s);
    }
    return 0;
}
