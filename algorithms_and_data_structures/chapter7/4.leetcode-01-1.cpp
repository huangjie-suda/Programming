/*************************************************************************
	> File Name: 4.leetcode-01-1.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 18 Sep 2024 06:03:44 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> h;
        vector<int> ret(2);
        for (int i = 0, I = nums.size(); i < I; i++) {
            if (h.find(target - nums[i]) != h.end()) {
                ret[0] = h[target - nums[i]];
                ret[1] = i;
                break;
            }
            h[nums[i]] = i;
        }
        return ret;
    }
};
