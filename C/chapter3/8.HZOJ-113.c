/*************************************************************************
	> File Name: 8.HZOJ-113.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 23 Mar 2024 11:32:38 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int y, m, a;
    scanf("%d%d", &y, &m);
    a = (y % 4 == 0 && y % 100) || y % 400 == 0;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        printf("31\n");
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        printf("30\n");
    } else {
        printf("%d\n", 28 + a);
    }

    return 0;
}
