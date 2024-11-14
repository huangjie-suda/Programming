/*************************************************************************
	> File Name: 6.P1605-2.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 25 Oct 2024 12:52:00 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#define MAX_N 5
int dir[4][2] = {
    {1, 0}, {0, 1}, {-1, 0}, {0, -1}
};
int g[MAX_N + 5][MAX_N + 5] = {0};
int n, m, t, sx, sy, fx, fy, ans;

void dfs(int x, int y) {
    if (x == fx && y == fy) {
        ans += 1;
        return ;
    }
    g[x][y] = 0;
    for (int k = 0; k < 4; k++) {
        int dx = x + dir[k][0];
        int dy = y + dir[k][1];
        if (g[dx][dy] == 0) continue;
        dfs(dx, dy);
    }
    g[x][y] = 1;
    return ;
}

int main() {
    scanf("%d%d%d", &n, &m, &t);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            g[i][j] = 1;
        }
    }
    scanf("%d%d%d%d", &sx, &sy, &fx, &fy);
    for (int i = 0, a, b; i < t; i++) {
        scanf("%d%d", &a, &b);
        g[a][b] = 0;
    }
    ans = 0;
    dfs(sx, sy);
    printf("%d\n", ans);
    return 0;
}
