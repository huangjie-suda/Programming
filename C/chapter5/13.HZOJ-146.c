/*************************************************************************
	> File Name: 13.HZOJ-146.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 26 May 2024 02:18:26 PM CST
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[55];
    scanf("%s", s);
    for (int i = 0; s[i]; i++) {
        if (islower(s[i])) {
            if (s[i] == 'z') s[i] = 'a';
            else s[i] += 1;
        }
        if (isupper(s[i])) {
            if (s[i] == 'Z') s[i] = 'A';
            else s[i] += 1;
        }
    }
    printf("%s\n", s);
    return 0;
}
