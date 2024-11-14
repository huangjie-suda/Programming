/*************************************************************************
	> File Name: 6.leetcode-1438.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 23 Oct 2024 12:14:06 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        deque<int> max_q, min_q;
        max_q.push_back(0);
        min_q.push_back(0);
        int ans = 1;
        int l = 0;
        for (int r = 1; r < n; r++) {
            while (!max_q.empty() && nums[max_q.back()] < nums[r]) max_q.pop_back();
            while (!min_q.empty() && nums[min_q.back()] > nums[r]) min_q.pop_back();
            max_q.push_back(r);
            min_q.push_back(r);
            while (nums[max_q.front()] - nums[min_q.front()] > limit) {
                if (max_q.front() == l) max_q.pop_front();
                if (min_q.front() == l) min_q.pop_front();
                l += 1;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};
