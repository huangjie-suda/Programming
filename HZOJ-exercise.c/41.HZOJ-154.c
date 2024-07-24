/*************************************************************************
	> File Name: 41.HZOJ-154.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 20 Jul 2024 06:59:06 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, cnt;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        cnt = 0;
        for (int j = n - i + 1; j >= 1; j--) {
            if (cnt) printf(" ");
            printf("%d", j);
            cnt += 1;
        }
        printf("\n");
    }
    return 0;
}
