/*************************************************************************
	> File Name: 33.vector.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 04 Oct 2024 10:09:11 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

class my_vector {
public :
    typedef int *iterator;
    my_vector() : n(2), tail(0), data(new int[n]) {}
    int *begin() { return data;}
    int *end() { return data + tail; }
    size_t size() { return tail; }
    int &operator[](int ind) { return data[ind]; }
    void push_back(int x) {
        if (n == tail) {
            expand();
        }
        data[tail++] = x;
        return ;
    }

private:
    void expand() {
        int *new_data = new int[2 * n];
        for (int i = 0; i < tail; i++) {
            new_data[i] = data[i];
        }
        delete[] data;
        data = new_data;
        cout << "expand : " << n << " -> " << 2 * n << endl;
        n *= 2;
        return ;
    }
    size_t n, tail;
    int *data;
};


int main() {
    vector<int> a;
    my_vector b;

    for (int i = 0; i < 10; i++) {
        a.push_back(rand() % 100);
    }
    cout << "vector<int> a : push back done" << endl;

    for (int i = 0; i < 10; i++) {
        b.push_back(rand() % 100);
    }
    cout << "my_vector b : push_back done" << endl;

    cout << "vector<int> a for : ";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "my_vector b for : ";
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < a.size(); i++) {
        a[i] = 2 * i;
    }
    cout << "vector<int> a update 2 * i done" << endl;
    for (int i = 0; i < b.size(); i++) {
        b[i] = 3 * i;
    }
    cout << "my_vector b update 3 * i done" << endl;

    cout << "vector<int>::iterator : ";
    for (vector<int>::iterator iter = a.begin(); iter != a.end(); iter++) {
        int x = *iter;
        cout << x << " ";
    }
    cout << endl;

    cout << "my_vector::iterator : ";
    for (my_vector::iterator iter = b.begin(); iter != b.end(); iter++) {
        int x = *iter;
        cout << x << " ";
    }
    cout << endl;

    cout << "vector<int> a new for : ";
    for (int x : a) {
        cout << x << " ";
    }
    cout << endl;

    cout << "my_vector b new for : ";
    for (int x : b) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
