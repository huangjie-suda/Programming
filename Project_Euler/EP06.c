/*************************************************************************
	> File Name: EP06.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 09 Jul 2024 10:10:51 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 100

int main() {
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= 100; i++) {
        sum1 += i;
        sum2 += i * i;
    }
    printf("%d\n", sum1 * sum1 - sum2);
    return 0;
}
