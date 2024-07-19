/*************************************************************************
	> File Name: 24.HZOJ-118.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 25 Mar 2024 03:52:12 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int y;
    const char *name;
    scanf("%d", &y);
    switch (((y - 1900) % 12 + 12) % 12) {
        case 0:  name = "rat"; break;
        case 1:  name = "ox"; break;
        case 2:  name = "tiger"; break;
        case 3:  name = "rabbit"; break;
        case 4:  name = "dragon"; break;
        case 5:  name = "snake"; break;
        case 6:  name = "horse"; break;
        case 7:  name = "sheep"; break;
        case 8:  name = "monkey"; break;
        case 9:  name = "rooster"; break;
        case 10: name = "dog"; break;
        case 11: name = "pig"; break;
    }
    printf("%s\n", name);
    return 0;
}
