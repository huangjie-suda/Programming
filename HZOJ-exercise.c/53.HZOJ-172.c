/*************************************************************************
	> File Name: 53.HZOJ-172.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 23 Jul 2024 10:10:30 PM CST
 ************************************************************************/

#include<stdio.h>

void sort(char *s, int len) {
    for (int i = 0; i < len; i++) {
        if (s[i] > s[i + 1]) {
            char temp[len];
            temp[i] = s[i];
            s[i] = s[i + 1];
            s[i + 1] = temp[i];
        }
    }
    return ;
}

int main() {
    char s[10];
    for (int i = 0; i < 10; i++) {
        scanf("%s", s + i);
    }
    sort(s, 10);
    for (int i = 0; i < 10; i++) {
        printf("%s\n", &s[i]);
    }
    return 0;
}
