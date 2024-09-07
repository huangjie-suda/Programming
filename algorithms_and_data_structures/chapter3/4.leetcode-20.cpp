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
    char *data;
    int size, top;
} Stack;

Stack *initStack(int n) {
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->size = n;
    s->data = (char *)malloc(sizeof(char) * n);
    s->top = -1;
    return s;
}

int emptyStack(Stack *s) {
    return s->top == -1;
}

char top(Stack *s) {
    if (emptyStack(s)) return 0;
    return s->data[s->top];
}

int push(Stack *s, char val) {
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

void solve(char str[]) {
    int flag = 1;
    Stack *s = initStack(100);
    for (int i = 0; str[i]; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') push(s, str[i]);
        else {
            switch (str[i]) {
                case ')': 
                    if (!emptyStack(s) && top(s) == '(') pop(s);
                    else flag = 0;
                    break;       
                case ']':
                    if (!emptyStack(s) && top(s) == '[') pop(s);
                    else flag = 0;
                    break;
                case '}':
                    if (!emptyStack(s) && top(s) == '{') pop(s);
                    else flag = 0;
                    break;
            }
            if (flag == 0) break;
        }
    }
    if (flag == 0 || !emptyStack(s)) {
        printf("error : %s\n", str);
    } else printf("success : %s\n", str);
    clearStack(s);
    return ;
}

int main() {
    char str[100];
    while (~scanf("%s", str)) {
        solve(str);
    }
    return 0;
}
