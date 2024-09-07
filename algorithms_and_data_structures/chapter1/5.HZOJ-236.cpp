/*************************************************************************
	> File Name: 5.HZOJ-236.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 07 Aug 2024 03:23:48 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int arr[10], vis[10] = {0};

void print_one_result(int m) {
    for (int i = 0; i <= m - 2; i++) {
        if (arr[i + 1] < arr[i]) return ;
    }
    for (int i = 0; i < m; i++) {
        if (i) cout << " ";
        cout << arr[i];
    }
    cout << endl;
    return ;
}

void f(int i, int n, int m) {
    if (i == m) {
        print_one_result(m);
        return ;
    }
    for (int k = 1; k <= n; k++) {
        if (vis[k]) continue;
        arr[i] = k;
        vis[k] = 1;
        f(i + 1, n, m);
        vis[k] = 0;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    f(0, n, m);
    return 0;
}
