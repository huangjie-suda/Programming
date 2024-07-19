/*************************************************************************
	> File Name: 4.freopen.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 05 Jun 2024 03:27:22 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    freopen("output.txt", "w", stdout); // r, w
    freopen("input.txt", "r", stdin);
    printf("hello freopen, stdout\n");
    char s[1000];
    while (scanf("%[^\n]", s) != EOF) {
        getchar();
        printf("%s | hello world\n", s);
    }
    return 0;
}
