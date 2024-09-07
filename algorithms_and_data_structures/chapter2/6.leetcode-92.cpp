/*************************************************************************
	> File Name: 6.leetcode-92.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 12 Aug 2024 04:38:50 PM CST
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right) return head;
        ListNode new_head, *p, *q;
        new_head.next = head;
        p = &new_head, q = &new_head;
        for (int i = 1; i < left; i++) p = p->next;
        for (int i = 1; i <= right; i++) q = q->next;
        for (int i = 0; i < right - left; i++) {
            ListNode *node = p->next;
            p->next = p->next->next;
            node->next = q->next;
            q->next = node;
        }
        return new_head.next;
    }
};
