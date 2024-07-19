/*************************************************************************
	> File Name: 6.fscanf_and_fseek.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 09 Jun 2024 03:56:39 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    FILE *fp = fopen("data5.txt", "r");
    int n;
    fseek(fp, 5, SEEK_SET);
    fscanf(fp, "%d", &n);
    printf("fscanf n = %d\n", n);
    return 0;
}
