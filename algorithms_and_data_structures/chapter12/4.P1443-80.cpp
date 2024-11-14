/*************************************************************************
	> File Name: 4.P1443.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 25 Oct 2024 11:06:35 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#define MAX_N 400
int n, m;
int dis[MAX_N + 5][MAX_N + 5];
int dir[8][2] = {
    {2, 1}, {-2, 1}, {2, -1}, {-2, -1},
    {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
};


void dfs(int step, int x, int y) {
    if (dis[x][y] != -1 && dis[x][y] <= step) return ;
    dis[x][y] = step;
    for (int k = 0; k < 8; k++) {
        int dx = x + dir[k][0];
        int dy = y + dir[k][1];
        if (dx < 1 || dx > n) continue;
        if (dy < 1 || dy > m) continue;
        dfs(step + 1, dx, dy);
    }
    return ;
}

int main() {
    int x, y;
    scanf("%d%d%d%d", &n, &m, &x, &y);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dis[i][j] = -1;
        }
    }
    dfs(0, x, y);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j > 1) printf(" ");
            printf("%d", dis[i][j]);
        }
        printf("\n");
    }
    return 0;
}
