/*************************************************************************
	> File Name: 5.P1443.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 25 Oct 2024 11:41:07 AM CST
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

#define MAX_N 400
int dis[MAX_N + 5][MAX_N + 5];
int dir[8][2] = {
    {2, 1}, {-2, 1}, {2, -1}, {-2, -1},
    {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
};

struct Node {
    Node(int s, int x, int y) : s(s), x(x), y(y) {}
    int s, x, y;
};

void bfs(int n, int m, int x, int y) {
    queue<Node> q;
    q.push(Node(0, x, y));
    dis[x][y] = 0;
    while (!q.empty()) {
        Node now = q.front();
        q.pop();
        for (int k = 0; k < 8; k++) {
            int dx = now.x + dir[k][0];
            int dy = now.y + dir[k][1];
            if (dx < 1 || dx > n) continue;
            if (dy < 1 || dy > m) continue;
            if (dis[dx][dy] != -1) continue;
            q.push(Node(now.s + 1, dx, dy));
            dis[dx][dy] = now.s + 1;
        }
    }
    return ;
}

int main() {
    int n, m, x, y;
    scanf("%d%d%d%d", &n, &m, &x, &y);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dis[i][j] = -1;
        }
    }
    bfs(n, m, x, y);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j > 1) printf(" ");
            printf("%d", dis[i][j]);
        }
        printf("\n");
    }
    return 0;
}
