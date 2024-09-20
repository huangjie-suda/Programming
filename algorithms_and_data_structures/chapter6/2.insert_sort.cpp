/*************************************************************************
	> File Name: 2.insert_sort.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 08 Sep 2024 04:40:26 PM CST
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include "0.sort_test.h"

void insert_sort(int *arr, int l, int r) {
    for (int i = l + 1; i < r; i++) {
        int j = i;
        while (j > l && arr[j] < arr[j - 1]) {
            swap(arr[j], arr[j - 1]);
            j -= 1;
        }
    }
    return ;
}

void unguarded_insert_sort(int *arr, int l, int r) {
    int ind = l;
    for (int i = l + 1; i < r; i++) {
        if (arr[i] < arr[ind]) ind = i;
    }
    while (ind > l) {
        swap(arr[ind], arr[ind - 1]);
        ind -= 1;
    }
    for (int i = l + 1; i < r; i++) {
        int j = i;
        while (arr[j] < arr[j - 1]) {
            swap(arr[j], arr[j - 1]);
            j -= 1;
        }
    }
    return ;
}

int main() {
    int *arr = getRandData(SMALL_DATA_N);
    TEST(insert_sort, arr, SMALL_DATA_N); 
    TEST(unguarded_insert_sort, arr, SMALL_DATA_N);
    free(arr);
    return 0;
}
