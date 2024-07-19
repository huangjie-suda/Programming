/*************************************************************************
	> File Name: 16.HZOJ-112.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 04 Apr 2024 11:10:12 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char x[10];
    scanf("%s", x);
    switch (x[0]) {
        case 'a': printf("It is good\n"); break;
        case 'b': printf("OMG\n"); break;
        case 'c': printf("Yes!\n"); break;
    }
    return 0;
}
