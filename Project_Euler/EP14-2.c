/*************************************************************************
	> File Name: EP14-2.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 13 Jul 2024 02:59:02 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000
#define MAX_M 100000

int keep[MAX_M + 5] = {0};

int calc_len(long long n) {
    if (n == 1) return 1;
    if (n <= MAX_M && keep[n]) return keep[n];
    int ret = ((n & 1) ? calc_len(3 * n + 1) : calc_len(n >> 1)) + 1;
    if (n <= MAX_M) keep[n] = ret;
    return ret;
}

int main() {
    int ans = 0, len = 0;
    for (int i = 1; i < MAX_N; i++) {
        int temp_len = calc_len(i);
        if (temp_len <= len) continue;
        ans = i;
        len = temp_len;
    }
    printf("ans = %d, len = %d\n", ans, len);
    return 0;
}
