/*************************************************************************
	> File Name: 16.HZOJ-279.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 14 Nov 2024 03:19:34 PM CST
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

#define MAX_N 1000000
char s[MAX_N + 5], t[MAX_N + 5];

int string_min(char *s) {
    int n = strlen(s), i = 0, j = 1, k = 0;
    while (i < n && j < n && k < n) {
        if (s[(i + k) % n] == s[(j + k) % n]) k += 1;
        else if (s[(i + k) % n] > s[(j + k) % n]) {
            i = i + k + 1;
            k = 0;
        } else {
            j = j + k + 1;
            k = 0;
        }
        if (i == j) j += 1;
    }
    return min(i, j);
}

int main() {
    int s_min, t_min;
    scanf("%s%s", s, t);
    s_min = string_min(s);
    t_min = string_min(t);
    int flag = 1;
    for (int i = 0, n = strlen(s); i < n; i++) {
        if (s[(s_min + i) % n] == t[(t_min + i) % n]) continue;
        flag = 0;
        break;
    }
    if (flag) {
        printf("Yes\n");
        for (int i = 0, n = strlen(s); i < n; i++) {
            printf("%c", s[(s_min + i) % n]);
        }
        printf("\n");
    } else {
        printf("No\n");
    }
    return 0;
}
