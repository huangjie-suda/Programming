/*************************************************************************
	> File Name: 9.HZOJ-259.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 30 Oct 2024 02:41:24 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 1000000

struct Data {
    int a, b;
};

Data machine[MAX_N + 5], work[MAX_N + 5];
int ind[MAX_N + 5] = {0};

bool cmp1(const Data &a, const Data &b) {
    if (a.a != b.a) return a.a > b.a;
    return a.b < b.b;
}

bool cmp2(const Data &a, const Data &b) {
    if (a.a != b.a) return a.a > b.a;
    return a.b > b.b;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%d%d", &machine[i].a, &machine[i].b);
    for (int i = 0; i < m; i++) scanf("%d%d", &work[i].a, &work[i].b);
    sort(machine, machine + n, cmp1);
    sort(work, work + m, cmp2);
    int ans = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (ind[j]) continue;
            if (machine[j].a >= work[i].a && machine[j].b >= work[i].b) {
                ans += 500 * work[i].a + 2 * work[i].b;
                ind[j] = 1;
                break;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) cnt += ind[i];
    printf("%d %d\n", cnt, ans);
    return 0;
}
