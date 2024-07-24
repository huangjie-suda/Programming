/*************************************************************************
	> File Name: 39.HZOJ-152.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 20 Jul 2024 06:22:50 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    switch (n) {
        case 1: printf("%s\n", "Thursday"); break;
        case 2: printf("%s\n", "Friday"); break;
        case 3: printf("%s\n", "Saturday"); break;
        case 4: printf("%s\n", "Sunday"); break;
        case 5: printf("%s\n", "Monday"); break;
        case 6: printf("%s\n", "Tuesday"); break;
        case 7: printf("%s\n", "Wednesday"); break;
    }
    return 0;
}
