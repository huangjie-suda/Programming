/*************************************************************************
	> File Name: 37.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 29 Mar 2024 12:25:29 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int m;
    scanf("%d", &m);
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
        case 2: return 28;
    }

    return 0;
}
