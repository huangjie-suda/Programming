/*************************************************************************
	> File Name: 17.HZOJ-115.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 05 Apr 2024 01:25:43 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int x, y, xshi, xge, yshi, yge;
    scanf("%d%d", &x, &y);
    xshi = x % 100 / 10;
    xge = x % 10;
    yshi = y % 100 / 10;
    yge = y % 10;
    if (x == y) {
        printf("100\n");
    } else if (xshi == yge && xge == yshi) {
        printf("20\n");
    } else if (xshi != yshi && xshi != yge && xge != yshi && xge != yge) {
        printf("0\n");   
    } else printf("2\n");
    return 0;
}
