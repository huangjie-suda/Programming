/*************************************************************************
	> File Name: 3.HZOJ-271.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 22 Oct 2024 03:59:23 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    deque<int> q1, q2;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        while (!q1.empty() && arr[q1.back()] > arr[i]) q1.pop_back();
        q1.push_back(i);
        if (i < k - 1) continue;
        if (i - q1.front() == k) q1.pop_front();
        if (cnt1) printf(" ");
        printf("%d", arr[q1.front()]); cnt1++;
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        while (!q2.empty() && arr[q2.back()] < arr[i]) q2.pop_back();
        q2.push_back(i);
        if (i < k - 1) continue;
        if (i - q2.front() == k) q2.pop_front();
        if (cnt2) printf(" ");
        printf("%d", arr[q2.front()]); cnt2++;
    }
    printf("\n");
    return 0;
}
