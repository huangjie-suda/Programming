/*************************************************************************
	> File Name: EP13-add.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 17 Jul 2024 09:18:40 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 100

void transform_val(const char *str, int *ans) {
    //ans[0]记录数字位数
    int len = strlen(str);
    ans[0] = len;
    for (int i = 0; i < len; i++) {
        ans[len - i] = str[i] - '0';
    }
    return ;
}

void add_big_num(int *a, int *b, int *ans) {
    ans[0] = (a[0] > b[0] ? a[0] : b[0]);
    for (int i = 1; i <= ans[0]; i++) {
        ans[i] = a[i] + b[i];
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
    char str_a[MAX_N + 5] = {0}, str_b[MAX_N + 5] = {0};
    scanf("%s%s", str_a, str_b);
    int a[MAX_N + 5] = {0}, b[MAX_N + 5] = {0};
    transform_val(str_a, a);
    transform_val(str_b, b);
    int ans[MAX_N + 5] = {0};
    add_big_num(a, b, ans);
    for (int i = ans[0]; i > 0; i--) {
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}
