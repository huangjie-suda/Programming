/*************************************************************************
	> File Name: 5.random_data.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Mon 02 Sep 2024 06:07:27 PM CST
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    printf("26\n");
    for (int i = 0; i < 26; i++) {
        printf("%c %d\n", 'a' + i, rand() % 100000);
    }
    return 0;
}
