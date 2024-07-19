/*************************************************************************
	> File Name: 32.HZOJ-135.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 06 Apr 2024 02:24:16 PM CST
 ************************************************************************/

#include<stdio.h>

int is_leap_year(int y) {
    return (y % 4 == 0 && y % 100) || (y % 400 == 0);
}

int days(int y, int m) {
    switch (m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28 + is_leap_year(y);
    }
    return 0;
}

void f(int x, int y) {
    for (int j = 1; j <= 12; j++) {
        x = x - days(y, j);
        if (j < 12 && x > days(y, j + 1)) continue;
        if (x == 0) {
            printf("%d %d %d\n", y, j, days(y, j));
            break;
        }
        if (x <= days(y, j + 1)) {
            printf("%d %d %d\n", y, j + 1, x);
            break;
        }    
        if (j == 12 && x <= 31) {
            printf("%d %d %d\n", y + 1, 1, x);
            break;
        }
        if (j == 12 && x > 31) {
            return f(x, y + 1);
            break;
        } 
    }
    return ;
}

int main() {
    int x, y, m, d, s;
    scanf("%d%d%d%d", &x, &y, &m, &d);
    s = x;
    for (int i = m; i <= 12; i++) {
        if (s <= days(y, m) - d) {
            printf("%d %d %d\n", y, m, d + s);
            break;
        }
        x = x - days(y, i) + d;
        d = 0;
        if (i < 12 && x > days(y, i + 1)) continue;
        if (x == 0) {
            printf("%d %d %d\n", y, i, days(y, i));
            break;
        } 
        if (x <= days(y, i + 1)) {
            printf("%d %d %d\n", y, i + 1, x);
            break;
        }
        if (i == 12 && x <= 31) {
            printf("%d %d %d\n", y + 1, i % 12 + 1, x);
            break;
        }
        if (i == 12 && x > 31) {
            f(x, y + 1);
            break;
        }
    }
    return 0;
}
