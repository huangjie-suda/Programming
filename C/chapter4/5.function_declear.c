/*************************************************************************
	> File Name: 5.function_declear.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 29 Mar 2024 04:04:54 PM CST
 ************************************************************************/

#include<stdio.h>

int a_func(int);
int b_func(int);

int main() {
    a_func(1); // a_func(1) --> b_func(1) --> 3 * x = 3
    b_func(2); // b_func(2) --> a_func(2) --> 2 * x = 4
    return 0;
}

int b_func(int x) {
    switch (x) {
        case 1: printf("3 * x = %d\n", 3 * x); break;
        case 2: return a_func(x);
    }
    return 0;
}

int a_func(int x) {
    switch (x) {
        case 1: return b_func(x);
        case 2: printf("2 * x = %d\n", 2 * x); break;
    }
    return 0;
}
