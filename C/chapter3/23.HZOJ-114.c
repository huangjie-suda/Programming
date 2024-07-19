/*************************************************************************
	> File Name: 23.HZOJ-114.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 25 Mar 2024 03:35:31 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char s[10];
    const char *name;
    scanf("%s", s);
    switch (s[0]) {
        case 'h': name = "He\n"; goto PRINT;
        case 'l': name = "Li\n"; goto PRINT;
        case 'c': name = "Cao\n"; goto PRINT;
        case 'd': name = "Duan\n"; goto PRINT;
        case 'w': name = "Wang\n"; goto PRINT;
PRINT:
        printf("%s", name); break;
        default : printf("Not Here\n"); break;
    }
    return 0;
}
