/*************************************************************************
	> File Name: 7.leetcode-217.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 19 Sep 2024 03:54:48 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> h;
        for (auto x : nums) {
            if (h.find(x) != h.end()) return true;
            h.insert(x);
        }
        return false;
    }
};
