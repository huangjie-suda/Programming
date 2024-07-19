/*************************************************************************
	> File Name: 5.fseek_and_ftell.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 09 Jun 2024 03:49:44 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    FILE *fp = fopen("data5.txt", "w");
    printf("ftell(fp) = %ld\n", ftell(fp)); // 0
    fprintf(fp, "0123456789");
    printf("after print 0123456789 ftell(fp) = %ld\n", ftell(fp)); // 10
    fseek(fp, 2, SEEK_SET);
    printf("after fseek(2) ftell(fp) = %ld\n", ftell(fp)); // 2
    fprintf(fp, "abc");
    printf("after print abc ftell(fp) = %ld\n", ftell(fp)); // 5
    return 0;
}
