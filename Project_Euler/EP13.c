/*************************************************************************
	> File Name: EP13.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 17 Jul 2024 05:03:53 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_N 50

void transform_val(const char *str, int *num) {
    memset(num, 0, sizeof(int) * (MAX_N + 5));
    int len = strlen(str);
    num[0] = len;
    for (int i = 0; str[i]; i++) {
        num[len - i] = str[i] - '0';
    }
    return ;
}

void add_num(int *ans, int *num) {
    ans[0] = (ans[0] > num[0] ? ans[0] : num[0]);
    for (int i = 1; i <= ans[0]; i++) {
        ans[i] += num[i];
    }
    for (int k = 1; k <= ans[0]; k++) {
        if (ans[k] < 10) continue;
        ans[k + 1] += ans[k] / 10;
        ans[k] %= 10;
        if (k == ans[0]) ans[0]++;
    }
    return ;
}

int main() {
    char str[MAX_N + 5] = {0};
    int ans[MAX_N + 5] = {0}, temp[MAX_N + 5];
    while (scanf("%s", str) != EOF) {
        transform_val(str, temp);
        add_num(ans, temp);
    }
    for (int i = ans[0], j = 0; j < 10; j++, i--) {
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}
