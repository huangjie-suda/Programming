/*************************************************************************
	> File Name: 3.stack.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 16 Aug 2024 05:42:11 PM CST
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <ctime>

typedef struct Stack {
    int *data;
    int size, top;
} Stack;

Stack *initStack(int n) {
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->size = n;
    s->data = (int *)malloc(sizeof(int) * n);
    s->top = -1;
    return s;
}

int emptyStack(Stack *s) {
    return s->top == -1;
}

int top(Stack *s) {
    if (emptyStack(s)) return 0;
    return s->data[s->top];
}

int push(Stack *s, int val) {
    if (s->top + 1 == s->size) return 0;
    s->top += 1;
    s->data[s->top] = val;
    return 1;
}

int pop(Stack *s) {
    if (emptyStack(s)) return 0;
    s->top -= 1;
    return 1;
}

void clearStack(Stack *s) {
    if (s == NULL) return ;
    free(s->data);
    free(s);
    return ;
}

void outputStack(Stack *s) {
    printf("Stack : ");
    for (int i = s->top; i >= 0; --i) {
        printf("%4d", s->data[i]);
    }
    printf("\n\n");
    return ;
} 

int main() {
    srand(time(0));
    #define MAX_OP 10
    Stack *s = initStack(5);
    for (int i = 0; i < MAX_OP; i++) {
        int op = rand() % 3, val = rand() % 100;
        switch (op) {
            case 0:
                printf("pop Stack, item = %d\n", top(s));
                pop(s);
                break;
            case 1:
            case 2:
                printf("push Stack, item = %d\n", val);
                push(s, val);
                break;
        }
        outputStack(s);
    }
    clearStack(s);
    return 0;
}
