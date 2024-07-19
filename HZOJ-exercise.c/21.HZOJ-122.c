/*************************************************************************
	> File Name: 21.HZOJ-122.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 05 Apr 2024 03:13:16 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int t, shi, fen, miao;
    scanf("%d", &t);
    fen = t % 3600 / 60;
    miao = t % 60;
    if (t < 43200) {
        shi = t / 3600;
        printf("%02d:%02d:%02d am\n", shi, fen, miao);
    } else if (t < 46800) {
        shi = 12;
        printf("%02d:%02d:%02d midnoon\n", shi, fen, miao);
    } else {
        shi = t / 3600 - 12;
        printf("%02d:%02d:%02d pm\n", shi, fen, miao);
    }
    return 0;
}
