/*************************************************************************
	> File Name: 38.HZOJ-151.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 20 Jul 2024 05:27:12 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;
#include <cstdio>

int check(char a, char b) {
    if (a == b) return 0;
    if ((a == 'Y' && b == 'H') || (a == 'O' && b == 'Y') || (a == 'H' && b == 'O')) return 1;
    return 2;
}

int main() {
    char ml, mr, ll, lr;
    cin >> ml >> mr >> ll >> lr;
    if (check(ml, ll) == 1) {
        if (check(ml, lr) != 2) printf("%s\n", "MING");
        else {
            if (check(mr, lr) == 1) printf("%s\n", "MING");
            else printf("%s\n", "LIHUA");
        }
    }
    else if (check(ml, ll) == 0) {
        if (check(mr, lr) == 1) printf("%s\n", "MING");
        else if (check(mr, lr) == 2) printf("%s\n", "LIHUA");
        else printf("%s\n", "TIE");
    }
    else {
        if (check(mr, ll) != 1) printf("%s\n", "LIHUA");
        else {
            if (check(mr, lr) != 2) printf("%s\n", "MING");
            else printf("%s\n", "LIHUA");
        }
    }
    return 0;
}
