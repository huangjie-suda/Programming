/*************************************************************************
	> File Name: 12.user_interface.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 11 Jun 2024 03:17:52 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int page1_usage() {
    printf("1 : go to page2\n");
    printf("2 : go to page3\n");
    printf("3 : go to page4\n");
    int x = -1;
    do {
        printf("input : ");
        scanf("%d", &x);
    } while (x < 1 || x > 3);
    return x;
}

int page2_usage() {
    printf("0 : back to page1\n");
    printf("1 : go to page5\n");
    int x;
    do {
        printf("input : ");
        scanf("%d", &x);
    } while (x < 0 || x > 1);
    return x;
}

int page4_usage() {
    printf("0 : back to page1\n");
    printf("1 : go to page5\n");
    int x;
    do {
        printf("input : ");
        scanf("%d", &x);
    } while (x < 0 || x > 1);
    return x;
}

void page3_run() {
    int arr[10];
    for (int i = 0; i < 10; i++) arr[i] = rand() % 100;
    int len = 0;
    for (int i = 0; i < 10; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    for (int i = 0; i < len; i++) printf("-");
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%3d", arr[i]);
    }
    printf("\n\n");
    return ;
}

void page5_run() {
    printf("hello, this is page5\n");
    return ;
}

int main() {
    srand(time(0));
    int status = 1;
    while (1) {
        switch (status) {
            case 1: {
                printf("into page1 :\n");
                int x = page1_usage();
                if (x == 1) status = 2;
                else if (x == 2) status = 3;
                else if (x == 3) status = 4;
            } break;
            case 2: {
                printf("into page2 :\n");
                int x = page2_usage();
                if (x == 0) status = 1;
                else if (x == 1) status = 5;
            } break;
            case 3: {
                printf("into page3 :\n");
                page3_run();
                status = 5;
            } break;
            case 4: {
                printf("into page4 :\n");
                int x = page4_usage();
                if (x == 0) status = 1;
                else if (x == 1) status = 5;
            } break;
            case 5: {
                printf("into page5 :\n");
                page5_run();
                status = 1;
            } break;
        }
    }
    return 0;
}
