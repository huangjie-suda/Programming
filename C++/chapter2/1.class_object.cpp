/*************************************************************************
	> File Name: 1.class_object.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 28 Sep 2024 05:20:20 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Cat {};
class Dog {};
class People {
public :
    string name;
    int age;

    void say() {
        cout << "My name is " << name << ", " << age << " years old." << endl;
        return ;
    }
};

int main() {
    Cat garfiled;
    Dog odie1, odie2;
    People hug, song;

    hug.name = "Captain Hu";
    hug.age  = 50;
    hug.say();

    song.name = "Captain Song";
    song.age  = 32;
    song.say();
    return 0;
}
