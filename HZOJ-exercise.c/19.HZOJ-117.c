/*************************************************************************
	> File Name: 19.HZOJ-117.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 05 Apr 2024 02:33:36 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, qian, bai, shi, ge, b;
    scanf("%d", &a);
    qian = a % 10000 / 1000;
    bai = a % 1000 / 100;
    shi = a % 100 / 10;
    ge = a % 10;
    if (qian) {
        b = ge * 1000 + shi * 100 + bai * 10 + qian;
    } else if (qian == 0 && bai) {
        b = ge * 100 + shi * 10 + bai;
    } else if (qian == 0 && bai == 0 && shi) {
        b = ge * 10 + shi;
    } else b = ge;
    if (b == a) printf("YES\n");
    else printf("NO\n");
    return 0;
}
