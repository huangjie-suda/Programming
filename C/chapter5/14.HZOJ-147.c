/*************************************************************************
	> File Name: 14.HZOJ-147.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 26 May 2024 02:53:51 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

char s[10005];

int main() {
    scanf("%s", s);
    if (s[strlen(s) - 1] % 2) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
    return 0;
}
