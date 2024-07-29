/*************************************************************************
	> File Name: 2.HZOJ-172.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 27 Jul 2024 05:42:43 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    int n = 10;
    char s[10][100];
    for (int i = 0; i < n; i++) {
        scanf("%s", s[i]);
    }
    for (int i = 0; i < 9; i++) {
        char temp[10][100] = {'0'};
        for (int j = i + 1; j <= 9; j++) {
            if (strcmp(s[i], s[j]) > 0) {
                strcpy(temp[i], s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp[i]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", s[i]);
    } 
    return 0;
}
