/*************************************************************************
	> File Name: 12.HZOJ-145.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 26 May 2024 02:07:31 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char s[105], t[105];
    int s_len, t_len = -1;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        s_len = strlen(s);
        if (s_len > t_len) {
            strcpy(t, s);
            t_len = s_len;
        }
    }
    printf("%s\n", t);
    return 0;
}
