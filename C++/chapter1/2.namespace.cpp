/*************************************************************************
	> File Name: 2.namespace.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 01 Aug 2024 10:01:17 AM CST
 ************************************************************************/

#include<iostream>
//using namespace std;

namespace apple {

int cnt = 0;
void inc() {
    cnt += 1;
    return ;
}

}

namespace banana {

int cnt = 0;
void inc() {
    cnt += 1;
    return ;
}

}

#define P(msg) { \
    printf("%s = %d\n", #msg, msg); \
}

namespace apple {
    void des() {
        cnt -= 1;
        return ;
    }
}

namespace {
    int a = 1;
}

int main() {
    P(a);
    std::cout << "hello world" << std::endl;
    apple::cnt += 2;
    P(apple::cnt);
    apple::des();
    P(apple::cnt);
    using banana::cnt;
    cnt += 100;
    P(apple::cnt);
    P(banana::cnt);

    using namespace banana;
    inc();
    P(apple::cnt);
    P(banana::cnt);
    return 0;
}
