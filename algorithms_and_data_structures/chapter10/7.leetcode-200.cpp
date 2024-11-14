/*************************************************************************
	> File Name: 7.leetcode-200.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 20 Oct 2024 06:15:15 PM CST
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
    }
    vector<int> fa;
};

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        UnionSet u(n * m);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '0') continue;
                int ind = i * m + j + 1;
                if (j + 1 < m && grid[i][j + 1] == '1') u.merge(ind, ind + 1);
                if (i + 1 < n && grid[i + 1][j] == '1') u.merge(ind, ind + m);
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int ind = i * m + j + 1;
                if (grid[i][j] == '1' && u.fa[ind] == ind) ans += 1;
            }
        }
        return ans;
    }
};
