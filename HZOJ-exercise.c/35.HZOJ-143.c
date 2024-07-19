/*************************************************************************
	> File Name: 35.HZOJ-143.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 06 Apr 2024 10:18:55 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, qian, bai, shi, ge, c, d, flag = 0, sum = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        qian = i % 10000 / 1000;
        bai = i % 1000 / 100;
        shi = i % 100 / 10;
        ge = i % 10;
        c = qian * 10 + bai;
        d = shi * 10 + ge;
        for (int j = 2; j * j <= c; j++) {
            if (c % j == 0) {
                flag = 1;
            }
        }
        if (flag == 0 && i % 6 == 0 && (d == 1 || d == 4 || d == 9 || d == 16 || d == 25 || d == 36 || d == 49 || d == 64 || d == 81)) {
            printf("%d ", i);
            sum += 1;
        }
    }
    printf("\n");
    printf("%d\n", sum);
    return 0;
}
