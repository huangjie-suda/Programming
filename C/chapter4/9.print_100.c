/*************************************************************************
	> File Name: 9.print_100.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 30 Mar 2024 02:46:06 PM CST
 ************************************************************************/

#include<stdio.h>

void print(int n) {
    if (n == 1) {
        printf("%d\n", n);
        return ;
    }
    print(n - 1);
    printf("%d\n", n);
    return ;
}

int cnt = 10;

int main() {
    int n = cnt;
    cnt -= 1;
    if (n == 1) {
        printf("main : %d\n", n);
        return 0;
    }
    main();
    printf("main : %d\n", n);
    return 0;
}
