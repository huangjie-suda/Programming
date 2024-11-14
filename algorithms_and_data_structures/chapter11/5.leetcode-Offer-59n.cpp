/*************************************************************************
	> File Name: 5.leetcode-Offer-59n.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 23 Oct 2024 10:54:40 AM CST
 ************************************************************************/

#include <iostream>
#include <queue>
#include <deque>
using namespace std;

class MaxQueue {
    queue<int> q;
    deque<int> mq;
    MaxQueue() {}
    int max_value() {
        if (q.empty()) return -1;
        return mq.front();
    }
    void push_back(int value) {
        q.push(value);
        while (!mq.empty() && mq.back() < value) mq.pop_back();
        mq.push_back(value);
        return ;
    }
    int pop_front() {
        if (q.empty()) return -1;
        int val = q.front();
        q.pop();
        if (mq.front() == val) mq.pop_front();
        return val;
    }
};





int main() {



    return 0;
}
