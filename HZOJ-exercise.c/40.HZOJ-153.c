/*************************************************************************
	> File Name: 40.HZOJ-153.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 20 Jul 2024 06:45:50 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int y, m, q;
    scanf("%d%d%d", &y, &m, &q);
    if (m == 1 || m == 2) m += 12, y -= 1;
    int j = y / 100;
    int k = y % 100;
    int h = (q + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
    h += 6;
    if (h > 7) h %= 7;
    printf("%d\n", h);
    return 0;
}
