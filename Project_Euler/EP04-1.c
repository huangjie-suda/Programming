/*************************************************************************
	> File Name: EP04-1.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 09 Jul 2024 08:54:12 PM CST
 ************************************************************************/

#include<stdio.h>

int is_revese(int n) {
    int temp = 0, x = n;
    while (x) {
        temp = temp * 10 + x % 10;
        x /= 10;
    }
    return temp == n;
}

int main() {
    int ans = 0;
    for (int a = 100; a < 1000; a++) {
        for (int b = 100; b < 1000; b++) {
            if (is_revese(a * b) && a * b > ans) {
                ans = a * b;
                printf("%d * %d = %d\n", a, b, ans);
            }
        }
    }
    printf("ans = %d\n", ans);
    return 0;
}
