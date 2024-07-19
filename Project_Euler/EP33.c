/*************************************************************************
	> File Name: EP33.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 14 Jul 2024 10:50:20 AM CST
 ************************************************************************/

#include<stdio.h>

int is_val(int a, int b) {
    if (a % 10 == b / 10 && (b % 10) * a == b * (a / 10)) return 1;
    if (a / 10 == b % 10 && a * (b / 10) == (a % 10) * b) return 1;
    return 0;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int sum1 = 1, sum2 = 1;
    for (int a = 11; a < 99; a++) {
        for (int b = a + 1; b < 100; b++) {
            if  (b % 10 == 0 || a % 10 == 0) continue;
            if (!is_val(a, b)) continue;
            sum1 *= a;
            sum2 *= b;
            printf("a = %d, b = %d\n", a, b);
        }
    }
    printf("sum1 = %d, sum2 = %d\n", sum1, sum2);
    printf("%d\n", sum2 / gcd(sum1, sum2));
    return 0;
}
