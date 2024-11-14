/*************************************************************************
	> File Name: 6.P1605.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 25 Oct 2024 12:05:47 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 5
int dir[4][2] = {
    {0, -1}, {-1, 0}, {0, 1}, {1, 0}
};
int arr[MAX_N + 5][MAX_N + 5];
int ans;

void dfs(int n, int m, int sx, int sy, int fx, int fy) {
    if (sx == fx && sy == fy) {
        ans += 1;
        return ;
    }
    arr[sx][sy] = 1;
    for (int k = 0; k < 4; k++) {
        int dx = sx + dir[k][0];
        int dy = sy + dir[k][1];
        if (dx < 1 || dx > n) continue;
        if (dy < 1 || dy > m) continue;
        if (arr[dx][dy] == 0 || arr[dx][dy] == 1) continue;
        arr[dx][dy] = 1;
        dfs(n, m, dx, dy, fx, fy);
    }
    arr[sx][sy] = -1;
    return ;
}

int main() {
    int n, m, t, sx, sy, fx, fy;
    scanf("%d%d%d%d%d%d%d", &n, &m, &t, &sx, &sy, &fx, &fy);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            arr[i][j] = -1;
        }
    }
    for (int i = 0, a, b; i < t; i++) {
        scanf("%d%d", &a, &b);
        arr[a][b] = 0;
    }
    dfs(n, m, sx, sy, fx, fy);
    printf("%d\n", ans);
    return 0;
}
