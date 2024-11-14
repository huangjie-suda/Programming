/*************************************************************************
	> File Name: 23.property.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 02 Oct 2024 03:23:32 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class People {
public :
    People() { cnt += 1; }
    string name;
    static int cnt;
    ~People() { cnt -= 1; }
};
int People::cnt = 0;

void f() {
    People a, b;
    cout << "cnt : " << People::cnt << endl; // 5
    return ;
}

int main() {
    People a, b;
    cout << "cnt : " << People::cnt << endl; // 2
    People c;
    cout << "cnt : " << People::cnt << endl; // 3
    f();
    cout << "cnt : " << People::cnt << endl; // 3
    return 0;
}
