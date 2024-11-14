/*************************************************************************
	> File Name: 10.HZOJ-372-2.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 24 Oct 2024 03:11:56 PM CST
 ************************************************************************/

#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    deque<int> ap, bp;
    int p;
    for (p = 0; p < n; p++) {
        while (!ap.empty() && a[ap.back()] >= a[p]) ap.pop_back();
        while (!bp.empty() && b[bp.back()] >= b[p]) bp.pop_back();
        ap.push_back(p);
        bp.push_back(p);
        if (ap.size() != bp.size()) break;
    }
    printf("%d\n", p);
    return 0;
}
