/*************************************************************************
	> File Name: 34.HZOJ-143.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 06 Apr 2024 08:02:07 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, qian, bai, shi, ge, AB = 2, CD, c = 0, flag = 0, sum = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (i % 6 == 0) {
            qian = i % 10000 / 1000;
            bai = i % 1000 / 100;
            shi = i % 100 / 10;
            ge = i % 10;
            AB = qian * 10 + bai;
            CD = shi * 10 + ge;
        }
        for (int j = 2; j * j <= AB; j++) {
            if (AB % j == 0) {
                flag = 1;
            }
        }
        if (flag == 0) {
            for (int k = 1; k <= 10; k++) {
                if (CD == k * k) {
                    printf("%d ", i);
                    sum += 1;
                }
            }
        }    
    }
    printf("\n");
    printf("%d\n", sum);
    return 0;
}
