/*************************************************************************
	> File Name: EP44-test.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 14 Jul 2024 04:19:31 PM CST
 ************************************************************************/

#include<stdio.h>

int f(int x) {
    return x * x * x;
}

int binary_search(int (*func)(int), int val) {
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
    int n;
    while (scanf("%d", &n) != EOF) {
        printf("%s\n", binary_search(f, n) ? "YES" : "NO");
    }
    return 0;
}
