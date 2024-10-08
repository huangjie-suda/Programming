/*************************************************************************
	> File Name: 7.leetcode-589-2.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 03 Sep 2024 04:21:11 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void __preorder(Node *root, vector<int> &ans) {
        if (root == NULL) return ;
        ans.push_back(root->val);
        for (auto x : root->children) {
            __preorder(x, ans);
        }
        return ;
    }
    vector<int> preorder(Node* root) {
       vector<int> ans;
       __preorder(root, ans);
        return ans;
    }
};
