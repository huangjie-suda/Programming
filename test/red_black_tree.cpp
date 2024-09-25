/*************************************************************************
	> File Name: red_black_tree.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 25 Sep 2024 01:58:26 PM CST
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <ctime>

#define NIL (&__NIL)
#define RED 0
#define BLACK 1
#define DBLACK 2
#define K(n) (n->key)
#define C(n) (n->color)
#define L(n) (n->lchild)
#define R(n) (n->rchild)

typedef struct Node {
    int key, color; // 0 red, 1 black, 2 double black
    struct Node *lchild, *rchild;
} Node;

Node __NIL;

__attribute__((constructor))
void init_NIL() {
    NIL->key   = -1;
    NIL->color = BLACK;
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
    return root->lchild->color == RED || root->rchild->color == RED;
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
    if (root->lchild->color == RED && has_red_node(root->lchild)) flag = 1;
    if (root->rchild->color == RED && has_red_node(root->rchild)) flag = 2;
    if (flag == 0) return root;
    if (root->lchild->color == RED && root->rchild->color == RED) goto red_up_maintain;
    if (flag == 1) {
        if (root->lchild->rchild == RED) {
            root->lchild = left_rotate(root->lchild);
        }
        root = right_rotate(root);
    } else {
        if (root->rchild->lchild == RED) {
            root->rchild = right_rotate(root->rchild);
        }
        root = left_rotate(root);
    }
red_up_maintain:
    root->color = RED;
    root->lchild->color = root->rchild->color = BLACK;
    return root;
}

Node *__insert(Node *root, int key) {
    if (root == NIL) return getNewNode(key);
    if (key == root->key) return root;
    else if (key < root->key) root->lchild = __insert(root->lchild, key);
    else root->rchild = __insert(root->rchild, key);
    return insert_maintain(root);
}

Node *insert(Node *root, int key) {
    root = __insert(root, key);
    root->color = BLACK;
    return root;
}

Node *predecessor(Node *root) {
    Node *temp = root->lchild;
    while (temp->rchild != NIL) temp = temp->rchild;
    return temp;
}

Node *erase_maintain(Node *root) {
    if (root->lchild->color != DBLACK && root->rchild->color != DBLACK) return root;
    // brother : red
    if (has_red_node(root)) {
        root->color = RED;
        if (root->lchild->color == RED) {
            root = right_rotate(root);
            root->rchild = erase_maintain(root->rchild);
        } else if (root->rchild->color == RED) {
            root = left_rotate(root);
            root->lchild = erase_maintain(root->lchild);
        }
        root->color = BLACK;
        return root;
    }
    // brother : black
    if ((root->lchild->color == DBLACK && !has_red_node(root->rchild)) 
        || (root->rchild->color == DBLACK && !has_red_node(root->lchild))) {
        root->color += 1;
        root->lchild->color -= 1;
        root->rchild->color -= 1;
        return root;
    }
    if (root->lchild->color == DBLACK) {
        root->lchild->color = BLACK;
        if (root->rchild->rchild->color != RED) {
            root->rchild = right_rotate(root->rchild);
        }
        root->rchild->color = root->color;
        root = left_rotate(root);
    } else {
        root->rchild->color = BLACK;
        if (root->lchild->lchild->color != RED) {
            root->lchild = left_rotate(root->lchild);
        }
        root->lchild->color = root->color;
        root = right_rotate(root);
    }
    root->lchild->color = root->rchild->color = BLACK;
    return root;
}

Node *__erase(Node *root, int key) {
    if (root == NIL) return root;
    if (key < root->key) root->lchild = __erase(root->lchild, key);
    else if (key > root->key) root->rchild = __erase(root->rchild, key);
    else {
        if (root->lchild == NIL || root->rchild == NIL) {
            Node *temp = root->lchild == NIL ? root->rchild : root->lchild;
            temp->color += root->color;
            free(root);
            return temp;
        } else {
            Node *temp = predecessor(root);
            root->key = temp->key;
            root->lchild = __erase(root->lchild, temp->key);
        }
    }
    return erase_maintain(root);
}

Node *erase(Node *root, int key) {
    root = __erase(root, key);
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
    printf("(%d| %d; %d, %d)\n", root->color, root->key, root->lchild->key, root->rchild->key);
    output(root->lchild);
    output(root->rchild);
    return ;
}

int main() {
    srand(time(0));
    #define MAX_N 10
    Node *root = NIL;
    for (int i = 0; i < MAX_N; i++) {
        int x = rand() % 100;
        printf("insert %d to red black tree\n", x);
        root = insert(root, x);
        output(root);
    }
    int x;
    while (~scanf("%d", &x)) {
        printf("erase %d from red black tree\n", x);
        root = erase(root, x);
        output(root);
    }
    clear(root);
    return 0;
}
