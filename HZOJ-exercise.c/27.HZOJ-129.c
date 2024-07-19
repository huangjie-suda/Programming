/*************************************************************************
	> File Name: 27.HZOJ-129.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 05 Apr 2024 10:42:27 PM CST
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int main() {
    int n, ans = INT32_MAX;
    scanf("%d", &n);
    for (int i = 0, a; i < n; i++) {
        scanf("%d", &a);
        if (a < ans) ans = a;
    }
    printf("%d\n", ans);
    return 0;
}
