/*************************************************************************
	> File Name: 20.HZOJ-121.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 05 Apr 2024 02:52:51 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char a[10], b[10];
    scanf("%s%s", a, b);
    if ((a[0] == 'O' && b[0] == 'O') || (a[0] == 'Y' && b[0] == 'Y') || (a[0] == 'H' && b[0] == 'H')) printf("TIE\n");
    else if ((a[0] == 'O' && b[0] == 'Y') || (a[0] == 'Y' && b[0] == 'H') || (a[0] == 'H' && b[0] == 'O')) printf("MING\n");
    else printf("LI\n");
    return 0;
}
