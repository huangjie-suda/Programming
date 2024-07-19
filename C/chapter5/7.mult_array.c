/*************************************************************************
	> File Name: 7.mult_array.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 01 Apr 2024 04:45:25 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int b[3][4], cnt = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            b[i][j] = cnt;
            cnt += 1;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", b[i][j]);
        }
        printf("\n");
    }
    printf("-----------\n");
    cnt = 1;
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            b[i][j] = (cnt++);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
