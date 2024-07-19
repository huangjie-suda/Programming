/*************************************************************************
	> File Name: 14.time.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 31 May 2024 03:56:22 PM CST
 ************************************************************************/

#include <stdio.h>
#include <time.h>

#define TIME(func) { \
    long long b = clock(); \
    func; \
    long long e = clock(); \
    printf("%s run %lldms\n", #func, 1000 * (e - b) / CLOCKS_PER_SEC); \
}

void test(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) sum += i;
    printf("sum = %lld\n", sum);
    return ;
}

int main() {
    TIME(test(100000));
    TIME(test(1000000));
    TIME(test(10000000));
    return 0;
}
