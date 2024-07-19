/*************************************************************************
	> File Name: 20.function_with_pointer.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 27 May 2024 12:57:51 PM CST
 ************************************************************************/

#include<stdio.h>

void add_once(int *p) {
    *p += 1;
    return ;
}

void f(int n, int *sum_addr) {
    *sum_addr = (n + 1) * n / 2;
    return ;
}

void output(int *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("p[%d] = %d\n", i, p[i]); // p[i] = *(p + i)
    }
}

int main() {
    int a = 123;
    printf("a = %d\n", a);
    add_once(&a);
    printf("a = %d\n", a);
    int n = 10, sum;
    f(n, &sum);
    printf("sum = %d\n", sum);
    int arr[10] = {9, 8, 5, 3, 6, 2, 1, 0, 4, 7};
    output(arr, 10); // arr = &arr[0]
    return 0;
}
