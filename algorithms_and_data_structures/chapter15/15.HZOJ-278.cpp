/*************************************************************************
	> File Name: 15.HZOJ-278.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 14 Nov 2024 02:41:26 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 1000000
int nxt[MAX_N + 5];
char s[MAX_N + 5];

void get_next(char *s, int *nxt) {
    int j = -1;
    nxt[0] = -1;
    for (int i = 1; s[i]; i++) {
        while (j != -1 && s[i] != s[j + 1]) j = nxt[j];
        if (s[i] == s[j + 1]) j += 1;
        nxt[i] = j;
    }
    return ;
}

int main() {
    int L;
    scanf("%d", &L);
    scanf("%s", s);
    get_next(s, nxt);
    for (int i = 1; s[i]; i++) {
        int n = i + 1, m = n - nxt[i] - 1;
        if (n % m == 0 && n / m >= 2) {
            printf("%d %d\n", n, n / m);
        }
    }
    return 0;
}
