/*************************************************************************
	> File Name: EP06-2.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 09 Jul 2024 10:21:22 PM CST
 ************************************************************************/

#include <stdio.h>
#define n 100

int main() {
    int sum1 = n * (n + 1) >> 1;
    int sum2 = n * (n + 1) * (2 * n + 1) / 6;
    printf("%d\n", sum1 * sum1 - sum2);
    return 0;
}
