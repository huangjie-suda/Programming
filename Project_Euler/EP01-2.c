/*************************************************************************
	> File Name: EP01-2.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 08 Jul 2024 09:27:53 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int sum3 = (3 + 999) * 333 / 2;
    int sum5 = (5 + 995) * (999 / 5) / 2;
    int sum15 = (15 + 999 / 15 * 15) * (999 / 15) / 2;
    printf("%d\n", sum3 + sum5 - sum15);
    return 0;
}
//O(1) 常数级
