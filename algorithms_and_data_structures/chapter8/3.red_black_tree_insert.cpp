/*************************************************************************
	> File Name: 3.red_black_tree_insert.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 24 Sep 2024 02:38:01 PM CST
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <ctime>

#define RED    0
#define BLACK  1
#define DBLACK 2
#define NIL (&__NIL)
#define K(n) (n->key)
#define C(n) (n->color)
#define L(n) (n->lchild)
#define R(n) (n->rchild)

typedef struct Node {
    int key, color; // red 0, black 1, double black 2
    struct Node *lchild, *rchild;
} Node;

Node __NIL;

__attribute__((constructor))
void init_NIL() {
    NIL->key    = -1;
    NIL->color  = BLACK;
    NIL->lchild = NIL->rchild = NIL;
    return ;
}

Node *getNewNode(int key) {
    Node *p = (Node *)malloc(sizeof(Node));
    p->key = key;
    p->color = RED;
    p->lchild = p->rchild = NIL;
    return p;
}

bool has_red_node(Node *root) {
    return C(L(root)) == RED || C(R(root)) == RED;
}

Node *left_rotate(Node *root) {
    Node *new_root = root->rchild;
    root->rchild = new_root->lchild;
    new_root->lchild = root;
    return new_root;
}
 
Node *right_rotate(Node *root) {
    Node *new_root = root->lchild;
    root->lchild = new_root->rchild;
    new_root->rchild = root;
    return new_root;
}

Node *insert_maintain(Node *root) {
    int flag = 0;
    if (C(L(root)) == RED && has_red_node(L(root))) flag = 1;
    if (C(R(root)) == RED && has_red_node(R(root))) flag = 2;
    if (flag == 0) return root;
    if (C(L(root)) == RED && C(R(root)) == RED) goto red_up_maintain;
    if (flag == 1) {
        if (C(R(L(root))) == RED) {
            L(root) = left_rotate(L(root));
        }
        root = right_rotate(root);
    } else {
        if (C(L(R(root))) == RED) {
            R(root) = right_rotate(R(root));
        }
        root = left_rotate(root);
    }
red_up_maintain:
    C(root) = RED;
    C(L(root)) = C(R(root)) = BLACK;
    return root;
}

Node *__insert(Node *root, int key) {
    if (root == NIL) return getNewNode(key);
    if (root->key == key) return root;
    if (key < root->key) root->lchild = __insert(root->lchild, key);
    else root->rchild = __insert(root->rchild, key);
    return insert_maintain(root);
}

Node *insert(Node *root, int key) {
    root = __insert(root, key);
    root->color = BLACK;
    return root;
}

void clear(Node *root) {
    if (root == NIL) return ;
    clear(root->lchild);
    clear(root->rchild);
    free(root);
    return ;
}

void output(Node *root) {
    if (root == NIL) return ;
    printf("(%d| %d; %d, %d)\n", C(root), K(root), K(L(root)), K(R(root)));
    output(root->lchild);
    output(root->rchild);
    return ;
}

int main() {
    srand(time(0));
    Node *root = NIL;
    #define MAX_N 10
    for (int i = 0; i < MAX_N; i++) {
        int x = rand() % 100;
        printf("\ninsert %d to red black tree : \n", x);
        root = insert(root, x);
        output(root);
    }
    clear(root);
    return 0;
}
