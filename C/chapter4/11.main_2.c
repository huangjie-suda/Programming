/*************************************************************************
	> File Name: 11.main_2.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 30 Mar 2024 03:51:54 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (strcmp(argv[0], "./bilibili") != 0) {
        printf("wrong call, please call : ./bilibili\n");
        return 0;
    }
    printf("right call\n");
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}
