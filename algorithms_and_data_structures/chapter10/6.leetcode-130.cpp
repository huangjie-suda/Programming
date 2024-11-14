/*************************************************************************
	> File Name: 6.leetcode-130.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 20 Oct 2024 04:34:18 PM CST
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
    int merge(int a, int b) {
        if (get(a) == get(b)) return 0;
        fa[get(a)] = get(b);
        return 1;
    }
    vector<int> fa;
};

class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size(), n = board[0].size();
        UnionSet u(m * n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int ind = i * n + j + 1;
                if (board[i][j] != 'O') continue;
                if (i == 0 || i == m - 1) u.merge(ind, 0);
                if (j == 0 || j == n - 1) u.merge(ind, 0);
                if (j + 1 < n && board[i][j + 1] == 'O') u.merge(ind, ind + 1);
                if (i + 1 < m && board[i + 1][j] == 'O') u.merge(ind, ind + n);
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int ind = i * n + j + 1;
                if (board[i][j] != 'O') continue;
                if (u.get(ind) != u.get(0)) board[i][j] = 'X';
            }
        }
        return ;
    }
};
