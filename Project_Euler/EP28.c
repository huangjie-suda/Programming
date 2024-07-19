/*************************************************************************
	> File Name: EP28.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 10 Jul 2024 11:20:46 AM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N 1001

int main() {
    int sum = 1;
    for (int l = 3; l <= MAX_N; l += 2) {
        sum += 4 * l * l - 6 * l + 6;
    }
    printf("%d\n", sum);
    return 0;
}
