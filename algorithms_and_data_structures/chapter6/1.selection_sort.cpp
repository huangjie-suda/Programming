/*************************************************************************
	> File Name: 1.selection_sort.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 08 Sep 2024 03:59:33 PM CST
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include "0.sort_test.h"

void selection_sort(int *arr, int l, int r) {
    for (int i = l, I = r - 1; i < I; i++) {
        int ind = i;
        for (int j = i; j < r; j++) {
            if (arr[j] < arr[ind]) ind = j;
        }
        swap(arr[ind], arr[i]);
    }
    return ;
}

int main() {
    int *arr = (int *)malloc(sizeof(int) * SMALL_DATA_N);
    TEST(selection_sort, arr, SMALL_DATA_N);
    free(arr);
    return 0;
}
