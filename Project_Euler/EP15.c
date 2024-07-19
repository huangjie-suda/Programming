/*************************************************************************
	> File Name: EP15.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 17 Jul 2024 09:24:13 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    long long n = 40, m = 20, ans = 1;
    while (m > 1) {
        if (n > 20) ans *= (n--);
        if (m && ans % m == 0) ans /= (m--); 
    }
    printf("%lld\n", ans);
    return 0;
}
