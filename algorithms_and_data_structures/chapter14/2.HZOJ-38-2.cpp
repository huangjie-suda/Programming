/*************************************************************************
	> File Name: 2.HZOJ-38-2.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 31 Oct 2024 03:21:43 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

long long f[105];

int main() {
    int n;
    cin >> n;
    f[1] = 1;
    f[2] = 2;
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    cout << f[n] << endl;
    return 0;
}
