/*************************************************************************
	> File Name: 36.HZOJ-143.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 20 Jul 2024 04:13:13 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int is_prime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0; 
    }
    return 1;
}

int is_val(int x) {
    int y = sqrt(x);
    if (y * y == x) return 1;
    else return 0;
}

int main() {
    int a, b, cnt = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (i % 6) continue;
        int qian, bai, shi, ge;
        qian = i / 1000;
        bai = i % 1000 / 100;
        shi = i % 100 / 10;
        ge = i % 10;
        int AB = qian * 10 + bai;
        int CD = shi * 10 + ge;
        if (!is_prime(AB)) continue;
        if (!is_val(CD)) continue; 
        if (cnt) printf(" ");
        printf("%d", i);
        cnt += 1;
    }
    printf("\n");
    printf("%d\n", cnt);
    return 0;
}
