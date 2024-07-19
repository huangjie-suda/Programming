/*************************************************************************
	> File Name: binary_search.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 14 Jul 2024 03:43:56 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX_N 500

//待查找的区间是满足单调递增的
int binary_search(int *arr, int n, int val) {
    int head = 0, tail = n - 1, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (arr[mid] == val) return mid;
        if (arr[mid] < val) head = mid + 1;
        else tail = mid - 1;
    }
    return -1;
}

//数组 : 展开的函数
//函数 : 压缩的数组
//y = f(x), arr[0] = 123

int arr[MAX_N + 5] = {0};

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k;
    while (scanf("%d", &k) != EOF) {
        int index = binary_search(arr, n, k);
        printf("search %d from array: %d\n", k, index);
    }
    return 0;
}
