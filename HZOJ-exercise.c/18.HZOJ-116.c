/*************************************************************************
	> File Name: 18.HZOJ-116.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 05 Apr 2024 01:47:31 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b) {
        if (c <= a) {
            if (b + c <= a) printf("illegal triangle\n");
            else if (b * b + c * c > a * a) printf("acute triangle\n");
            else if (b * b + c * c == a * a) printf("right triangle\n");
            else printf("obtuse triangle\n");
        }
        else {
            if (a + b <= c) printf("illegal triangle\n");
            else if (a * a + b * b > c * c) printf("acute triangle\n");
            else if (a * a + b * b == c * c) printf("right triangle\n");
            else printf("obtuse triangle\n");
        }
    } else {
        if (c <= b) {
            if (a + c <= b) printf("illegal triangle\n");
            else if (a * a + c * c > b * b) printf("acute triangle\n");
            else if (a * a + c * c == b * b) printf("right triangle\n");
            else printf("obtuse triangle\n");
        }
        else {
            if (a + b <= c) printf("illegal triangle\n");
            else if (a * a + b * b > c * c) printf("acute triangle\n");
            else if (a * a + b * b == c * c) printf("right triangle\n");
            else printf("obtuse triangle\n");
        }
    }
    return 0;
}
