/*************************************************************************
	> File Name: 11.leetcode-622.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 22 Aug 2024 09:34:11 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};

class MyCircularQueue {
public:
    int count, size;
    Node *head, *tail;
    MyCircularQueue(int k) {
        head = new Node();
        tail = head;
        for (int i = 1; i < k; i++) {
            tail->next = new Node();
            tail = tail->next;
        }
        tail->next = head;
        size = k;
        count = 0;
        return ;
    }
    
    bool enQueue(int value) {
        if (isFull()) return false;
        tail = tail->next;
        tail->data = value;
        count += 1;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) return false;
        head = head->next;
        count -= 1;
        return true;
    }
    
    int Front() {
        if (isEmpty()) return -1;
        return head->data;
    }
    
    int Rear() {
        if (isEmpty()) return -1;
        return tail->data;
    }
    
    bool isEmpty() {
        return count == 0;
    }
    
    bool isFull() {
        return count == size;
    }
};
