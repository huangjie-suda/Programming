/*************************************************************************
	> File Name: 43.HZOJ-156.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 21 Jul 2024 03:38:44 PM CST
 ************************************************************************/

#include<stdio.h>

int is_prime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int is_pow(int n) {
    switch (n) {
        case 1:
        case 4:
        case 9:
        case 16:
        case 25:
        case 36:
        case 49:
        case 64:
        case 81: return 1; break;
        default : return 0;
    }
}

int main() {
    int a, b, cnt = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (!is_prime(i)) continue;
        if (!is_pow(i / 100) || !is_pow(i % 100)) continue;
        if (cnt) printf(" ");
        printf("%d", i);
        cnt += 1;
    }
    printf("\n");
    printf("%d\n", cnt);
    return 0;
}
