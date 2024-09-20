/*************************************************************************
	> File Name: 3.shell.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 08 Sep 2024 05:51:05 PM CST
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include "0.sort_test.h"

void unguarded_insert_sort(int *arr, int l, int r, int step) {
    int ind = l;
    for (int i = l + step; i < r; i += step) {
        if (arr[i] < arr[ind]) ind = i;
    }
    while (ind > l) {
        swap(arr[ind], arr[ind - step]);
        ind -= step;
    }
    for (int i = l + 2 * step; i < r; i += step) {
        int j = i;
        while (arr[j] < arr[j - step]) {
            swap(arr[j], arr[j - step]);
            j -= step;
        }
    }
    return ;
}

void shell_sort(int *arr, int l, int r) {
    int k = 2, n = r - l, step;
    do {
        step = n / k == 0 ? 1 : n / k;
        for (int i = l, I = l + step; i < I; i++) {
            unguarded_insert_sort(arr, i, r, step);
        }
        k *= 2;
    } while (step != 1);
    return ;
}

void shell_sort_hibbard(int *arr, int l, int r) {
    int step = 1, n = r - l;
    do {
        step = step * 2 + 1;
    } while (step * 2 + 1 <= n);
    do {
        step /= 2;
        for (int i = l, I = l + step; i < I; i++) {
            unguarded_insert_sort(arr, i, r, step);
        } 
    } while (step > 1);
    return ;
}

int main() {
    int *arr = getRandData(BIG_DATA_N);
    TEST(shell_sort, arr, BIG_DATA_N);
    TEST(shell_sort_hibbard, arr, BIG_DATA_N);
    free(arr);
    return 0;
}
