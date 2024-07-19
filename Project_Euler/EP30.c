/*************************************************************************
	> File Name: EP30.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 10 Jul 2024 10:10:39 AM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

#define MAX_N 354294

int is_val(int n) {
    int temp = 0, x = n;
    while (x) {
        temp += (int)pow(x % 10, 5);
        x /= 10;
    }
    return temp == n;
}

int main() {
    int sum = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_val(i)) continue;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
