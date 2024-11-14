/*************************************************************************
	> File Name: 1.brute_force.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 09 Nov 2024 11:57:31 AM CST
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

#define TEST(func, s, t) { \
    printf("%s(%s, %s) = %d\n", #func, s, t, func(s, t)); \
}

#define MOD 9973
#define BASE 131

int hash_func(const char *s) {
    int h = 0, slen = strlen(s);
    for (int i = slen - 1, kbase = 1; i >= 0; i--) {
        h = (h + s[i] * kbase) % MOD;
        kbase = kbase * BASE % MOD;
    }
    return h;
}

int RabinKarp(const char *s, const char *t) {
    int thash = hash_func(t), tlen, nbase = 1;
    for (tlen = 0; t[tlen]; tlen++) nbase = nbase * BASE % MOD;
    for (int i = 0, h = 0; s[i]; i++) {
        h = h * BASE + s[i];
        if (i >= tlen) h = (h - s[i - tlen] * nbase % MOD + MOD) % MOD;
        if (i + 1 < tlen) continue;
        if (h != thash) continue;
        if (strncmp(s + i - tlen + 1, t, tlen) == 0) {
            return i - tlen + 1;
        }
    }
    return -1;
}


int main() {
    char s[100], t[100];
    while (~scanf("%s%s", s, t)) {
        TEST(RabinKarp, s, t);
    }
    return 0;
}
