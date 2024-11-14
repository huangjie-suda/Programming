/*************************************************************************
	> File Name: 31.array_object.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 03 Oct 2024 10:24:57 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Array {
public :
    Array() : data(new int[10]) {}
    int &operator[](int ind) {
        return data[ind];
    }
    int *data;
};

int main() {
    Array a;
    for (int i = 0; i < 10; i++) {
        a[i] = rand() % 100;
    }
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
