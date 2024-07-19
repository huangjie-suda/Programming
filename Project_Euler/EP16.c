/*************************************************************************
	> File Name: EP16.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 17 Jul 2024 09:37:27 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX_N 400

int num[MAX_N + 5];    

int main() {
    num[0] = num[1] = 1;
    for (int i = 0; i < 100; i++) {
        for (int j = 1; j <= num[0]; j++) num[j] *= 1024;
        for (int k = 1; k <= num[0]; k++) {
            if (num[k] < 10) continue;
            num[k + 1] += num[k] / 10;
            num[k] %= 10;
            num[0] += (k == num[0]);
        }
    }
    int sum = 0;
    for (int i = num[0]; i >= 1; i--) {
        sum += num[i];
    }
    printf("%d\n", sum);
    return 0;
}
