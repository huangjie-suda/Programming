/*************************************************************************
	> File Name: 10.fwrite_fread.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 10 Jun 2024 04:24:20 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h> // srand, rand
#include <time.h>  // time

void output(int *arr, int n) {
    printf("arr : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return ;
}

int fwrite_test() {
    srand(time(0));
    #define MAX_N 10
    int arr[MAX_N];
    for (int i = 0; i < MAX_N; i++) {
        arr[i] = rand() % 10000;
    }
    output(arr, MAX_N);
    FILE *fp = fopen("data10.dat", "wb");
    fwrite(arr, sizeof(int), MAX_N, fp);
    fclose(fp);
    return 0;
}

int main() {
    int arr[MAX_N];
    FILE *fp = fopen("data10.dat", "rb");
    output(arr, MAX_N);
    fread(arr, sizeof(int), MAX_N, fp);
    output(arr, MAX_N); 
    return 0;
}
