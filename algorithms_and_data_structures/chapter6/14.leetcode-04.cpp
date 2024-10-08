/*************************************************************************
	> File Name: 14.leetcode-04.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 13 Sep 2024 04:18:41 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size(), p1 = 0, p2 = 0, k = 0;
        vector<int> temp(n + m);
        while (p1 < n || p2 < m) {
            if (p2 == m || (p1 < n && nums1[p1] <= nums2[p2])) {
                temp[k++] = nums1[p1++];
            } else {
                temp[k++] = nums2[p2++];
            }
        }
        double a = temp[(n + m) / 2], b = temp[(n + m) / 2];
        if ((n + m) % 2 == 0) b = temp[(n + m) / 2 - 1];
        return (a + b) / 2.0;
    }
};
