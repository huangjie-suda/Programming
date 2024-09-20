/*************************************************************************
	> File Name: 6.leetccode-35.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 19 Sep 2024 03:18:07 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int head = 0, tail = nums.size(), mid;
        while (head < tail) {
            mid = (head + tail) / 2;
            if (nums[mid] < target) head = mid + 1;
            else tail = mid;
        }
        return head;
    }
};
