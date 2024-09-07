/*************************************************************************
	> File Name: 7.leetcode-844.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 19 Aug 2024 10:27:40 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
void pushStack(string &s, stack<char> &s1) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '#') {
                if (!s1.empty()) s1.pop();
            } else s1.push(s[i]);
        }
        return ;
    }
    bool backspaceCompare(string s, string t) {
        stack<char> s1, s2;
        pushStack(s, s1);
        pushStack(t, s2);
        if (s1.size() != s2.size()) return false;
        for (int i = 0; !s1.empty(); i++) {
            if (s1.top() != s2.top()) return false;
            s1.pop(), s2.pop();
        }
        return true;
    }
