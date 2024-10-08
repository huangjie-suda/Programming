/*************************************************************************
	> File Name: 13.leetcode-21.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 13 Sep 2024 03:46:45 PM CST
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode ret, *p = &ret;
        while (list1 || list2) {
            if (list2 == NULL || (list1 && list1->val <= list2->val)) {
                p->next = list1;
                list1 = list1->next;
                p = p->next;
            } else {
                p->next = list2;
                list2 = list2->next;
                p = p->next;
            }
        }
        return ret.next;
    }
};
