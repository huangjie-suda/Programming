/*************************************************************************
	> File Name: 14.leetcode-LCR-143.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 04 Sep 2024 03:55:33 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool iscontain(TreeNode *A, TreeNode *B) {
        if (B == NULL) return true;
        if (A == NULL || A->val != B->val) return false;
        return iscontain(A->left, B->left) && iscontain(A->right, B->right);
    }
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if (A == NULL || B == NULL) return false;
        return iscontain(A, B) || isSubStructure(A->left, B) || isSubStructure(A->right, B);
    }
};
