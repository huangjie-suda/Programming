/*************************************************************************
	> File Name: 3.P1036.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 25 Oct 2024 09:55:55 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 20
int val[MAX_N + 5];
long long ans = 0;

int is_prime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

void dfs(int k, int ind, int m, int n, int sum) {
    if (k == m) {
        if (is_prime(sum)) ans += 1;
        return ;
    }
    for (int i = ind; i <= n; i++) {
        // select i
        dfs(k + 1, i + 1, m, n, sum + val[i]);
    }
    return ;
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) scanf("%d", val + i);
    dfs(0, 1, k, n, 0); 
    printf("%lld\n", ans);
    return 0;
}
