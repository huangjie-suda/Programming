/*************************************************************************
	> File Name: 7.HZOJ-254.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 29 Oct 2024 05:14:25 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define MAX_N 50000
struct Data {
    int l, r, id;
} arr[MAX_N + 5];
int m_time[MAX_N + 5];
int ans[MAX_N + 5];

bool cmp(const Data &a, const Data &b) {
    if (a.l != b.l) return a.l < b.l;
    return a.id < b.id;
}

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &arr[i].l, &arr[i].r);
        arr[i].id = i;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++) {
        int pos = -1;
        for (int j = 0; j < cnt; j++) {
            if (m_time[j] < arr[i].l) {
                pos = j;
                break;
            }
        }
        if (pos == -1) pos = (cnt++);
        m_time[pos] = arr[i].r;
        ans[arr[i].id] = pos + 1;
    }
    printf("%d\n", cnt);
    for (int i = 0; i < n; i++) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
