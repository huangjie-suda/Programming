/*************************************************************************
	> File Name: 29.HZOJ-132.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 06 Apr 2024 11:52:26 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    long long n, mult = 1;
    scanf("%lld", &n);
    for (int i = 0, a; i < n; i++) {
        scanf("%d", &a);
        mult *= a; 
    }
    printf("%lld\n", mult);
    return 0;
}
