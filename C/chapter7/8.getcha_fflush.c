/*************************************************************************
	> File Name: 8.getchar.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 05 Jun 2024 04:31:46 PM CST
 ************************************************************************/

#include <stdio.h>

#ifdef GETCHAR

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    getchar();
    char c = 'x';
    scanf("%c", &c);
    printf("a = %d, b = %d, c = %c\n", a, b, c);
    return 0;
}

#endif


#ifdef FFLUSH

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    fflush(stdin);
    char c = 'x';
    scanf("%c", &c);
    printf("a = %d, b = %d, c = %c\n", a, b, c);
    while (scanf("%c", &c) != EOF) {
        printf("%c", c);
    }
    printf("\n");
    return 0;
}

#endif
