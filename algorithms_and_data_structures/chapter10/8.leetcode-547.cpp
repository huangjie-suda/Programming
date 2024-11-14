/*************************************************************************
	> File Name: 8.leetcode-547.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 21 Oct 2024 02:34:50 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class UnionSet {
public :
    UnionSet(int n) : fa(n + 1) {
        for (int i = 0; i <= n; i++) fa[i] = i;
    }
    int get(int x) {
        return fa[x] = (fa[x] == x ? x : get(fa[x]));
    }
    void merge(int a, int b) {
        fa[get(a)] = get(b);
        return ;
    }
    vector<int> fa;
};

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        UnionSet u(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (isConnected[i][j]) u.merge(i, j);
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (u.fa[i] == i) ans += 1;
        }
        return ans;
    }
};
