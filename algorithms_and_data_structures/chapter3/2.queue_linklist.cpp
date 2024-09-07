/*************************************************************************
	> File Name: 2.queue_linklist.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 16 Aug 2024 11:20:03 AM CST
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <ctime>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct LinkList {
    Node head, *tail;
} LinkList;

typedef struct Queue {
    LinkList *l;
    int count;
} Queue;

LinkList *initLinkList() {
    LinkList *l = (LinkList *)malloc(sizeof(LinkList));
    l->head.next = NULL;
    l->tail = &(l->head);
    return l;
}

Node *getNewNode(int val) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = val;
    node->next = NULL;
    return node;
}

int insertTail(LinkList *l, int val) {
    Node *node = getNewNode(val);
    l->tail->next = node;
    l->tail = node;
    return 1;
}

int eraseHead(LinkList *l) {
    if (l->head.next == NULL) return 0;
    Node *p = l->head.next;
    l->head.next = l->head.next->next;
    if (p == l->tail) l->tail = &(l->head);
    free(p);
    return 1;
}

void clearLinkList(LinkList *l) {
    Node *p = l->head.next, *q;
    while (p) {
        q = p;
        free(p);
        p = q->next;
    }
    free(l);
    return ;
}

Queue *initQueue() {
    Queue *q = (Queue *)malloc(sizeof(Queue));
    q->l = initLinkList();
    q->count = 0;
    return q;
}

int empty(Queue *q) {
    return q->count == 0;
}

int emptyLinkList(LinkList *l) {
    return l->head.next == NULL;
}

int frontLinkList(LinkList *l) {
    if (emptyLinkList(l)) return 0;
    return l->head.next->data;
}

int front(Queue *q) {
    if (empty(q)) return 0;
    return frontLinkList(q->l);
}

int push(Queue *q, int val) {
    insertTail(q->l, val);
    q->count += 1;
    return 1;
}

int pop(Queue *q) {
    if (empty(q)) return 0;
    eraseHead(q->l);
    q->count -= 1;
    return 1;
}

void clearQueue(Queue *q) {
    if (q == NULL) return ;
    clearLinkList(q->l);
    free(q);
    return ;
}

void outputQueue(Queue *q) {
    printf("Queue : ");
    Node *p = q->l->head.next;
    for (int i = 0; i < q->count; i++, p = p->next) {
        printf("%4d", p->data);
    }
    printf("\n\n");
    return ;
}

int main() {
    srand(time(0));
    #define MAX_OP 10
    Queue *q = initQueue();
    for (int i = 0; i < MAX_OP; i++) {
        int op = rand() % 5, val = rand() % 100; // 0,1 : pop | 2,3,4 : push
        switch (op) {
            case 0:
            case 1:
                printf("front of Queue : %d\n", front(q));
                pop(q);
                break;
            case 2:
            case 3:
            case 4:
                printf("push %d to Queue\n", val);
                push(q, val);
                break;
        }
        outputQueue(q);
    }
    clearQueue(q);
    return 0;
}
