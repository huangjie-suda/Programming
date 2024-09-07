/*************************************************************************
	> File Name: 5.leetcode-703.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 06 Sep 2024 04:50:16 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class KthLargest {
public:
    typedef pair<int, int> PII;
    int k, tot = 0;
    set<PII> s;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (auto x : nums) {
            add(x);
        }
        return ;
    }

    int add(int val) {
        if (s.size() < k) {
            s.insert(PII(val, tot++));
        } else {
            if (s.begin()->first < val) {
                s.insert(PII(val, tot++));
            }
        }
        if (s.size() > k) s.erase(s.begin());
        return s.begin()->first;
    }
};
