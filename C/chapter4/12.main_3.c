/*************************************************************************
	> File Name: 11.main_2.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 30 Mar 2024 03:51:54 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[], char **env) {
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    for (char **p = env; p[0]; p += 1) {
        printf("%s\n", p[0]);
    }
    return 0;
}
