/*************************************************************************
	> File Name: EP09-3.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 15 Jul 2024 11:51:07 AM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int ans = 0;
    for (int n = 1; n < 33; n++) {
        for (int m = n + 1; m < 33; m++) {
            if (gcd(m, n) != 1) continue;
            int a = 2 * m * n;
            int b = m * m - n * n;
            int c = m * m + n * n;
            if (1000 % (a + b + c) == 0) {
                int k = 1000 / (a + b + c);
                ans = a * b * c * (int)pow(k, 3);
                printf("%d\n", ans);
            }
            if (ans) break;
        }
        if (ans) break;
    }
    return 0;
}
