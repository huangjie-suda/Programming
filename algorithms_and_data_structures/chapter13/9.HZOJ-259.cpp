/*************************************************************************
	> File Name: 9.HZOJ-259.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 30 Oct 2024 03:35:23 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 100000

struct Data {
    int x, y;
};

Data machine[MAX_N + 5], task[MAX_N + 5];
int cnt[105];

bool cmp(const Data &a, const Data &b) {
    if (a.x - b.x) return a.x > b.x;
    return a.y > b.y;
}

int main() {
    int n, m;
    long long ans = 0, task_cnt = 0;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%d%d", &machine[i].x, &machine[i].y);
    for (int i = 0; i < m; i++) scanf("%d%d", &task[i].x, &task[i].y);
    sort(machine, machine + n, cmp);
    sort(task, task + m, cmp);
    for (int i = 0, j = 0; i < m; i++) {
        while (j < n && machine[j].x >= task[i].x) {
            cnt[machine[j].y] += 1;
            j += 1;
        }
        for (int k = task[i].y; k <= 100; k++) {
            if (cnt[k] == 0) continue;
            ans += 500 * task[i].x + 2 * task[i].y;
            task_cnt += 1;
            cnt[k] -= 1;
            break;
        }
    } 
    printf("%lld %lld\n", task_cnt, ans);
    return 0;
}
