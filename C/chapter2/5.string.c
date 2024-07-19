/*************************************************************************
	> File Name: 5.string.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 18 Mar 2024 12:07:22 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char t[10];
    for (int i = 0; i < 10; i++) t[i] = -1;
    scanf("%s", t);
    for (int i = 0; i < 10; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
    char s[100] = "hello world";
    printf("%s\n", s);
    scanf("%s", s);
    printf("scanf s : %s\n", s);
    getchar(); // 吞掉空格
    scanf("%[a-zA-z]", s);
    printf("%%[a-zA-Z] : %s\n", s);
    return 0;
}
