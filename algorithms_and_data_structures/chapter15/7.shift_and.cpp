/*************************************************************************
	> File Name: 7.shift_and.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 10 Nov 2024 03:50:14 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#define TEST(func, s, t) { \
    printf("%s(%s, %s) = %d\n", #func, s, t, func(s, t)); \
}

int shift_and(const char *s, const char *t) {
    int code[256] = {0}, n = 0;
    for (n = 0; t[n]; n++) code[t[n]] |= (1 << n);
    int p = 0;
    for (int i = 0; s[i]; i++) {
        p = (p << 1 | 1) & code[s[i]];
        if (p & (1 << (n - 1))) return i - n + 1;
    }
    return -1;
}

int shift_or(const char *s, const char *t) {
    int code[256] = {0}, n = 0;
    for (n = 0; t[n]; n++) code[t[n]] |= (1 << n);
    for (n = 0; t[n]; n++) code[t[n]] ^= -1;
    int p = 0;
    for (int i = 0; s[i]; i++) {
        p = (p << 1) | code[s[i]];
        if (p & (1 << (n - 1)) == 0) return i - n + 1;
    }
    return -1;
}

int main() {
    char s[100], t[100];
    while (~scanf("%s%s", s, t)) {
        TEST(shift_and, s, t);
        TEST(shift_or, s, t);
    }
    return 0;
}
