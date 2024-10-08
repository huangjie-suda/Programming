/*************************************************************************
	> File Name: 12.leetcode-107.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 04 Sep 2024 03:56:44 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode *root, int k, vector<vector<int>> &ans) {
        if (root == NULL) return ;
        if (k == ans.size()) ans.push_back(vector<int>());
        ans[k].push_back(root->val);
        dfs(root->left, k + 1, ans);
        dfs(root->right, k + 1, ans);
        return ;
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        dfs(root, 0, ans);
        for (int i = 0, j = ans.size() - 1; i < j; i++, j--) swap(ans[i], ans[j]);
        return ans;
    }
};
