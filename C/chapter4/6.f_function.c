/*************************************************************************
	> File Name: 6.f_function.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 29 Mar 2024 04:37:41 PM CST
 ************************************************************************/

#include<stdio.h>

int f(int n) {
    printf("in f(%d)\n", n);
    int ret;
    if (n == 1) ret = 1;
    else ret = n * f(n - 1);
    printf("out f(%d)\n", n);
    return ret;
}

int main() {
    int n;
    while (~scanf("%d", &n)) {
        printf("f(%d) = %d\n", n, f(n));
    }
    return 0;
}
