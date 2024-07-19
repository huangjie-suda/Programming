/*************************************************************************
	> File Name: EP09.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 15 Jul 2024 09:22:58 AM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int f(int n) {
    return n * n;
}

int is_val(int (*func)(int), int val) {
    int head = 1, tail = val, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (func(mid) == val) return 1;
        if (func(mid) < val) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int main() {
    for (int a = 1; a <= 334; a++) {
        for (int b = a; b <= 500; b++) {
            int x = a * a + b * b;
            if (!is_val(f, x)) continue;
            printf("a = %d, b = %d\n", a, b);
            int c = 0;
            c = (int)sqrt(x);
            if ((a + b + c) == 1000) {
                printf("%d %d %d\n", a, b, c);
                break;
            }     
        }
    }
    return 0;
}
