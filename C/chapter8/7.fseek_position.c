/*************************************************************************
	> File Name: 7.fseek_position.c
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 09 Jun 2024 04:07:31 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    FILE *fp = fopen("data7.txt", "w");
    fprintf(fp, "0123456789");
    fseek(fp, -4, SEEK_CUR);
    fprintf(fp, "xy");
    fseek(fp, -3, SEEK_END);
    fprintf(fp, "z");

    fseek(fp, 0, SEEK_END); // end
    fseek(fp, 0, SEEK_CUR); // begin
    return 0;
}
