/*************************************************************************
	> File Name: 26.function_pointer.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 27 May 2024 04:15:32 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void test1() {
    printf("function test1\n");
    return ;
}

void test2() {
    printf("function test2\n");
    return ;
}

void test3() {
    printf("function test3\n");
    return ;
}
void (*p)();

int main() {
    srand(time(0));
    p = test1;
    p();
    p = test2;
    p();
    p = test3;
    p();
    void (*arr[3])() = {test1, test2, test3};
    for (int i = 0; i < 10; i++) {
        arr[rand() % 3]();
    }
    return 0;
}
