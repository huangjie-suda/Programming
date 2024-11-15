/*************************************************************************
	> File Name: 1.P1219.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 24 Oct 2024 04:45:03 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

#define MASK(n) ((1 << (n + 1)) - 2)

int total_ans = 3;
int arr[20];

unordered_map<int, int> ind;

void print_one_result(int n) {
    for (int i = 1; i <= n; i++) {
        if (i > 1) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    total_ans -= 1;
    return ;
}

int dfs(int i, int t1, int t2, int t3, int n) {
    if (i > n) {
        if (total_ans) print_one_result(n);
        return 1;
    }
    int ans = 0;
    for (int t = t1; t; t -= (-t & t)) {
        int j = ind[-t & t];
        if ((t2 & (1 << (i + j - 1))) && (t3 & (1 << (i - j + n)))) {
            arr[i] = j;
            ans += dfs(i + 1, t1 ^ (1 << j), t2 ^ (1 << (i + j - 1)),
                t3 ^ (1 << (i - j + n)),
                n
            );
        }
    }
    return ans;
} 

int main() {
    int n;
    scanf("%d", &n);
    total_ans = 3;
    for (int i = 1; i < 2 * n; i++) ind[1 << i] = i;
    int ans = dfs(1, MASK(n), MASK(2 * n - 1), MASK(2 * n - 1), n);
    printf("%d\n", ans);
    return 0;
}
