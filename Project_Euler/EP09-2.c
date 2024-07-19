/*************************************************************************
	> File Name: EP09-2.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 15 Jul 2024 11:25:10 AM CST
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    for (int n = 1; n <=19; n++) {
        for (int m = n + 1; m <=32; m++) {
            if (gcd(m, n) != 1) continue;
            int a = 2 * n * m;
            int b = m * m - n * n;
            int c = m * m + n * n;
            int d = a + b + c;
            if (1000 % d == 0) {
                a = (int)1000 / d * a;
                b = (int)1000 / d * b;
                c = (int)1000 / d * c;
                printf("a = %d, b = %d, c = %d\n", a, b, c);
                printf("abc = %d\n", a * b * c);
                break;
            }
        }
    }

    return 0;
}
