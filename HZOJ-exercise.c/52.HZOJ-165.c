/*************************************************************************
	> File Name: 52.HZOJ-165.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 23 Jul 2024 03:13:39 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    long long c, cnt = 0;
    scanf("%lld", &c);
    for (long long a = 1; a < c; a++) {
        long long b = sqrt(c * c - a * a);
        if (b * b != c * c - a * a) continue;
        cnt += 1;
    }
    printf("%lld\n", cnt / 2);
    return 0;
}
