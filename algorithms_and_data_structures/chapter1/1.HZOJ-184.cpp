/*************************************************************************
	> File Name: 1.HZOJ-184.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 05 Aug 2024 08:11:10 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int f(int n) {
    if (n == 1) return 1;
    return (f(n - 1) + 1) * 2;
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
