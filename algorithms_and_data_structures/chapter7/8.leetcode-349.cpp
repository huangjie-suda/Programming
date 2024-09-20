/*************************************************************************
	> File Name: 8.leetcode-349.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 19 Sep 2024 04:11:54 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> h;
        vector<int> ret;
        for (auto x : nums1) h.insert(x);
        for (auto x : nums2) {
            if (h.find(x) == h.end()) continue;
            ret.push_back(x);
            h.erase(h.find(x));
        }
        return ret;
    }
};
