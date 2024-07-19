/*************************************************************************
	> File Name: EP02-3.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 09 Jul 2024 06:11:29 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 4000000

int main() {
    int a = 1, b = 2, sum = 2;
    while (a + b < MAX_N) {
        a += b;
        a ^= b;
        b ^= a;
        a ^= b;
        if (!(b & 1)) sum += b;
    }
    printf("%d\n", sum);
    return 0;
}
