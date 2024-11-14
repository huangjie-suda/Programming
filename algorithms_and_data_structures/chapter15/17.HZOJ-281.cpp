/*************************************************************************
	> File Name: 17.HZOJ-281.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 14 Nov 2024 03:45:22 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 1000000
char s[MAX_N + 5];
int node[MAX_N + 5][26];
int val[MAX_N + 5];
int cnt = 1, root = 1;

void insert(const char *s) {
    int p = root;
    for (int i = 0; s[i]; i++) {
        int ind = s[i] - 'a';
        if (node[p][ind] == 0) node[p][ind] = ++cnt;
        p = node[p][ind];
    }
    val[p] += 1;
}

int query(const char *s) {
    int ans = 0, p = root;
    for (int i = 0; s[i]; i++) {
        int ind = s[i] - 'a';
        p = node[p][ind];
        if (p == 0) break;
        ans += val[p];
    }
    return ans;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        insert(s);
    }
    for (int i = 0; i < m; i++) {
        scanf("%s", s);
        printf("%d\n", query(s));
    }
    return 0;
}
