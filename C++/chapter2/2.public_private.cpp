/*************************************************************************
	> File Name: 2.public_private.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 28 Sep 2024 05:49:17 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class People {
public:
    string name;
    int age;

    void say1() {
        cout << "say1 : My name is " << name << ", " << age << " years old" << endl;
        return ;
    }

private:
    string name2;
    int age2;
    
public:
    void say2() {
        cout << "say2 : My name is " << name << ", " << age << " years old" << endl;
        return ;
    }
};

int main() {
    People hug;
    hug.name = "Captain Hu";
    hug.age = 50;
    hug.say1();
    hug.say2();
    return 0;
}
