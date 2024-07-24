/*************************************************************************
	> File Name: 37.HZOJ-151.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 20 Jul 2024 04:46:05 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char a, b, c, d;
    scanf("%s%s%s%s", a, b, c, d);
    if ((a == 'Y' && c == 'H') || (a == 'O' && c == 'Y') || (a == 'H' && c == 'O')) {
        if (!((a == 'Y' && d == 'O') || (a == 'O' && d == 'H') || (a == 'H' && d == 'Y'))) printf("%s\n", "MING");
        else {
            if ((b == 'Y' && d == 'H') || (b == 'O' && d == 'Y') || (b == 'H' && d == 'O')) printf("%s\n", "MING");
            else printf("%s\n", "LIHUA");
        }
    }
    else if ((a == 'Y' && c == 'Y') || (a == 'O' && c == 'O') || (a == 'H' && c == 'H')) {
        if ((b == 'Y' && d == 'H') || (b == 'O' && d == 'Y') || (b == 'H' && d == 'O')) printf("%s\n", "MING");
        else if ((b == 'Y' && d == 'Y') || (b == 'O' && d == 'O') || (b == 'H' && d == 'H')) printf("%s\n", "TIE");
        else printf("%s\n", "LIHUA");
    }
    else {
        if ((b == 'Y' && c == 'H') || (b == 'O' && c == 'Y') || (b == 'H' && c == 'O')) {
            if ((b == 'Y' && d == 'O') || (b == 'O' && d == 'H') || (b == 'H' && d == 'Y')) printf("%s\n", "LIHUA");
            else printf("%s\n", "MING");
        }
        else printf("%s\n", "MING");
    }
    return 0;
}
