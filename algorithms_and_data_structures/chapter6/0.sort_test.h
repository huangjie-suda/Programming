/*************************************************************************
	> File Name: 0.sort_test.h
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 08 Sep 2024 04:02:24 PM CST
 ************************************************************************/

#ifndef _SORT_TEST_H
#define _SORT_TEST_H
#include <string.h>
#include <time.h>
#define SMALL_DATA_N 5000
#define BIG_DATA_N 1000000

__attribute__((constructor))
void __init_Rand__() {
    printf("init rand\n");
    srand(time(0));
}

int *getRandData(int n) {
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) arr[i] = rand() % 10000;
    return arr;
}

bool check(int *arr, int l, int r) {
    for (int i = l + 1; i < r; i++) {
        if (arr[i] < arr[i - 1]) return false;
    }
    return true;
}

#define swap(a, b) { \
    __typeof(a) __c = a; \
    a = b, b = __c; \
}

#define TEST(func, arr, n) { \
    printf("TEST %s : ", #func); \
    int *temp = (int *)malloc(sizeof(int) * n); \
    memcpy(temp, arr, sizeof(int) * n); \
    long long b = clock(); \
    func(temp, 0, n); \
    long long e = clock(); \
    if (check(temp, 0, n)) { \
        printf("\tOK "); \
    } else { \
        printf("\tFailed "); \
    } \
    printf(" %ditem %lldms\n", n, (e - b) * 1000 / CLOCKS_PER_SEC); \
    free(temp); \
}

#endif
