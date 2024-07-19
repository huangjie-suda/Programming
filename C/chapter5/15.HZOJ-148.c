/*************************************************************************
	> File Name: 15.HZOJ-148.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 26 May 2024 03:01:41 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char s[55];
    scanf("%s", s);
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        s[i] ^= s[j]; // c = a ^ b
        s[j] ^= s[i]; // a = c ^ b
        s[i] ^= s[j]; // b = c ^ a
    }
    printf("%s\n", s);
    return 0;
}
