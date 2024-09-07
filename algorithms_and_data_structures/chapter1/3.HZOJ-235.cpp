/*************************************************************************
	> File Name: 3.HZOJ-235.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 06 Aug 2024 10:19:45 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int arr[10];

void print_one_result(int n) {
    for (int i = 0; i <= n; i++) {
        if (i) cout << " ";
        cout << arr[i];
    }
    cout << endl;
    return ;
}

void f(int i, int j, int n) {
    if (j > n) return ;
    for (int k = j; k <= n; k++) {
        arr[i] = k;
        print_one_result(i);
        f(i + 1, k + 1, n);
    }
    return ;
}

int main() {
    int n;
    cin >> n;
    f(0, 1, n);
    return 0;
}
