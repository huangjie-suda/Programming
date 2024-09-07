/*************************************************************************
	> File Name: 3.swap.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 01 Aug 2024 11:00:36 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

void swap(int &pa, int &pb) {
    int c = pa;
    pa = pb;
    pb = c;
    return ;
}

#define P(msg) { \
    printf("%s = %d\n", #msg, msg); \
}

void inc(int &x) {
    x += 1;
    return ;
}

int main() {
    int a = 3, b = 6;
    int &c = a;
    P(a);
    P(b);
    swap(a, b);
    P(a);
    P(b);
    inc(a), inc(a);
    inc(b);
    P(a); P(b);
    c += 100;
    P(a); P(b); P(c);
    return 0;
}
