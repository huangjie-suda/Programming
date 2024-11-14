/*************************************************************************
	> File Name: 2.P1135.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 25 Oct 2024 09:35:15 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 200
int to[MAX_N + 5];
int dis[MAX_N + 5];

void dfs(int k, int a, int n) {
    if (dis[a] <= k) return ;
    dis[a] = k;
    if (a + to[a] <= n) dfs(k + 1, a + to[a], n);
    if (a - to[a] >= 1) dfs(k + 1, a - to[a], n);
    return ;
}

int main() {
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    for (int i = 1; i <= n; i++) scanf("%d", to + i);
    for (int i = 1; i <= n; i++) dis[i] = n + 1; 
    dfs(0, a, n);
    printf("%d\n", dis[b] == n + 1 ? -1 : dis[b]);
    return 0;
}
