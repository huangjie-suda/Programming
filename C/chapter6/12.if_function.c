/*************************************************************************
	> File Name: 12.if_function.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 31 May 2024 03:17:53 PM CST
 ************************************************************************/

#include<stdio.h>

#ifdef CLOCK
void test1() {
    printf("this is test1\n");
    return ;
}
#endif

#ifdef PHONE
void test2() {
    printf("this is test2\n");
    return ;
}
#endif

int main() {
#ifdef CLOCK
    test1();
#endif
#ifdef PHONE
    test2();
#endif
    return 0;
}
