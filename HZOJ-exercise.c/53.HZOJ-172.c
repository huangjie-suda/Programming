/*************************************************************************
	> File Name: 53.HZOJ-172.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 23 Jul 2024 10:10:30 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char (*s[20])[10];
    for (int i = 0; i < 10; i++) {
        scanf("%s", s[20][i]);
    }
    for (int i = 0; i < 10; i++) {
        if (strncmp(s[20][i], s[20][i + 1], 2) > 0) {
            char temp[20];
            strcpy(temp, s[20][i]);
            strcpy(s[20][i], s[20][i + 1]);
            strcpy(s[20][i + 1], temp);
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%s\n", s[20][i]);
    }
    return 0;
}
