/*************************************************************************
	> File Name: 10.leetcode-148-1.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 12 Sep 2024 04:28:25 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        int l = head->val, r = head->val, z;
        ListNode *p = head->next, *q, *h1 = nullptr, *h2 = nullptr;
        while (p) l = min(p->val, l), r = max(p->val, r), p = p->next;
        if (l == r) return head;
        z = (l + r) >> 1;
        p = head;
        while (p) {
            q = p->next;
            if (p->val <= z) {
                p->next = h1;
                h1 = p;
            } else {
                p->next = h2;
                h2 = p;
            }
            p = q;
        }
        h1 = sortList(h1);
        h2 = sortList(h2);
        p = h1;
        while (p->next) p = p->next;
        p->next = h2;
        return h1;
    }
};
