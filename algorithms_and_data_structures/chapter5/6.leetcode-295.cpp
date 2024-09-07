/*************************************************************************
	> File Name: 6.leetcode-295.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 06 Sep 2024 06:07:33 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class MedianFinder {
public:
    typedef pair<int, int> PII;
    int tot;
    set<PII> s1, s2;
    MedianFinder() {
        tot = 0;
    }

    void addNum(int num) {
        if (s1.size() == 0 || num < -s1.begin()->first) {
            s1.insert(PII(-num, tot++));
        } else {
            s2.insert(PII(num, tot++));
        }
        int n1 = (s1.size() + s2.size() + 1) / 2;
        if (n1 == s1.size()) return ;
        if (s1.size() < n1) {
            s1.insert(PII(-s2.begin()->first, tot++));
            s2.erase(s2.begin());
        } else {
            s2.insert(PII(-s1.begin()->first, tot++));
            s1.erase(s1.begin());
        }
        return ;
    }

    double findMedian() {
        if ((s1.size() + s2.size()) % 2) {
            return -s1.begin()->first;
        } else {
            double a = -s1.begin()->first;
            double b = s2.begin()->first;
            return (a + b) / 2.0;
        }
    }
};
