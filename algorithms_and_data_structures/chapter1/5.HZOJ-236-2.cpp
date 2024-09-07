/*************************************************************************
	> File Name: 5.HZOJ-236-2.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 07 Aug 2024 03:59:12 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int arr[10];

void print_one_result(int n) {
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << arr[i];
    }
    cout << endl;
    return ;
}

void f(int i, int j, int n, int m) {
    if (i == m) {
        print_one_result(m);
        return ;
    }
    for (int k = j; k <= n && m - i - 1 <= n - k; k++) {
        arr[i] = k;
        f(i + 1, k + 1, n, m);
    }
    return ;
}

int main() {
    int n, m;
    cin >> n >> m;
    f(0, 1, n, m);
    return 0;
}
