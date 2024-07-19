/*************************************************************************
	> File Name: 15.HZOJ-111.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 04 Apr 2024 05:17:53 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N <= 3) {
        printf("14\n");
    } else printf("%.1lf\n", 2.3 * (N - 3) + 14);
    return 0;
}
