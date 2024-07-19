/*************************************************************************
	> File Name: EP18-1.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 18 Jul 2024 10:31:43 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;
#include <cstdio>
#define MAX_N 15

int val[MAX_N + 5][MAX_N + 5];
int F[MAX_N + 5][MAX_N + 5];

int dfs(int i, int j, int n) {
    if (i == n) return 0;
    if (F[i][j]) return F[i][j];
    int x = max(dfs(i + 1, j, n), dfs(i + 1, j + 1, n)) + val[i][j];
    F[i][i] = x;
    return x;
}


int main() {
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j <= i; j++) {
            scanf("%d", &val[i][j]);
        }
    }
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j <= i; j++) {
            cout << val[i][j] << " ";
        }
        cout << endl;
    }
    printf("-----------------------------\n");
    printf("ans : %d\n", dfs(0, 0, MAX_N));
    return 0;
}
