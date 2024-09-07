/*************************************************************************
	> File Name: 9.leetcode-946.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 19 Aug 2024 09:50:18 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int x = 0, n = pushed.size();
        for (int i = 0; i < n; i++) {
            if (s.empty() || s.top() != popped[i]) {
                while (x < pushed.size() && pushed[x] != popped[i]) s.push(pushed[x]), x += 1;
                if (x == pushed.size()) return false;
                s.push(pushed[x]);
                x += 1;
            }
            s.pop();
        }
        return true;
    }
