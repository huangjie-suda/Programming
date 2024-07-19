/*************************************************************************
	> File Name: 8.HZOJ-113-2.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 23 Mar 2024 12:02:14 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int y, m, a;
    scanf("%d%d", &y, &m);
    a = (y % 4 == 0 && y % 100) || y % 400 == 0;
    switch (m) {
        case 1: printf("31\n"); break;
        case 3: printf("31\n"); break;
        case 4: printf("30\n"); break;
        case 5: printf("31\n"); break;
        case 6: printf("30\n"); break;
        case 7: printf("31\n"); break;
        case 8: printf("31\n"); break;
        case 9: printf("30\n"); break;
        case 10: printf("31\n"); break;
        case 11: printf("30\n"); break;
        case 12: printf("31\n"); break;
        default: printf("%d\n", 28 + a); break;
    }
    return 0;
}
