/*************************************************************************
	> File Name: 15-leetcode-219.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 13 Sep 2024 04:55:52 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ind(n);
        for (int i = 0; i < n; i++) ind[i] = i;
        sort(ind.begin(), ind.end(), [&](int i, int j) -> bool {
            if (nums[i] != nums[j]) return nums[i] < nums[j];
            return i < j;
        });
        for (int i = 0, I = n - 1; i < I; i++) {
            if (nums[ind[i]] - nums[ind[i + 1]]) continue;
            if (ind[i + 1] - ind[i] <= k) return true;
        }
        return false;
    }
};
