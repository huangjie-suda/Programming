/*************************************************************************
	> File Name: 1.string.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 24 Jul 2024 09:12:50 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[30] = "Let's go";
    char str2[] = " to London!";
    strcat(str1, str2);
    puts(str1);
    return 0;
}
