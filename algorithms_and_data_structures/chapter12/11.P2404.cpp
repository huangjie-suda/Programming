/*************************************************************************
	> File Name: 11.P2404.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 27 Oct 2024 02:09:17 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int ans[20] = {0};

void print_one_result(int n) {
    if (n < 2) return ;
    for (int i = 0; i < n; i++) {
        if (i) cout << "+";
        cout << ans[i];
    }
    cout << endl;
    return ;
}

void dfs(int k, int s_num, int n) {
    if (n == 0) {
        print_one_result(k);
        return ;
    }
    if (s_num > n) return ;
    for (int i = s_num; i <= n; i++) {
        ans[k] = i;
        dfs(k + 1, i, n - i);
    }
    return ;
}



int main() {
    int n;
    cin >> n;
    dfs(0, 1, n);
    return 0;
}
