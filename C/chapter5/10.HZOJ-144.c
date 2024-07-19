/*************************************************************************
	> File Name: 10.HZOJ-144.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 26 May 2024 01:52:34 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char str[105];
    scanf("%s", str);
    int cnt = 0;
    for (int i = 0; str[i]; i++) {
        cnt += (str[i] == 'A');
    }
    printf("%d\n", cnt);
    return 0;
}
