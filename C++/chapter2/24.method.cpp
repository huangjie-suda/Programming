/*************************************************************************
	> File Name: 24.method.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 02 Oct 2024 03:36:27 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class People {
public :
    void say() {
        cout << "say something : " << this << endl;
        return ;
    }
    static void say2() {
        cout << "class method : say something" << endl;
        return ;
    }
};


int main() {
    People a;
    a.say();
    a.say2(); // 1
    People::say2(); // 2
    return 0;
}
