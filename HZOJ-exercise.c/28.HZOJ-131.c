/*************************************************************************
	> File Name: 28.HZOJ-131.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 06 Apr 2024 11:41:23 AM CST
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int main() {
    int n, min = INT32_MAX, max = INT32_MIN;
    scanf("%d", &n);
    for (int i = 0, a; i < n; i++) {
        scanf("%d", &a);
        if (a > max) max = a;
        if (a < min) min = a;
    }
    printf("%d\n", max - min);
    return 0;
}
