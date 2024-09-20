/*************************************************************************
	> File Name: 9.leetcode-03.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 19 Sep 2024 04:52:46 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    bool check(string &s, int l) {
        int cnt[256] = {0}, k = 0;
        for (int i = 0; s[i]; i++) {
            cnt[s[i]] += 1;
            if (cnt[s[i]] == 1) k += 1;
            if (i >= l) {
                cnt[s[i - l]] -= 1;
                if (cnt[s[i - l]] == 0) k -= 1;
            }
            if (k == l) return true;
        }
        return false;
    }
    int lengthOfLongestSubstring(string s) {
        int head = 0, tail = s.size(), mid;
        // 111111000000
        while (head < tail) {
            mid = (head + tail + 1) / 2;
            if (check(s, mid)) head = mid;
            else tail = mid - 1;
        }
        return head;
    }
};
