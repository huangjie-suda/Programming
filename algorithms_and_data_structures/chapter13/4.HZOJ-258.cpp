/*************************************************************************
	> File Name: 4.HZOJ-258.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 29 Oct 2024 02:29:22 PM CST
 ************************************************************************/

#include <iostream>
#include <cinttypes>
using namespace std;

#define MAX_N 100
int arr[MAX_N + 5][MAX_N + 5];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
            arr[i][j] += arr[i - 1][j];
        }
    }
    int ans = INT32_MIN;
    for (int i = 1; i <= n; i++) {
        for (int j = i ; j <= n; j++) {
            int S = 0;
            for (int k = 1; k <= n; k++) {
                int a = arr[j][k] - arr[i - 1][k];
                if (S >= 0) S += a;
                else S = a;
                if (S > ans) ans = S;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
