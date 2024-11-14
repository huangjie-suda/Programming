/*************************************************************************
	> File Name: sort.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 18 Oct 2024 03:25:24 PM CST
 ************************************************************************/

#include <iostream>
#include <functional>
using namespace std;

#define BEGINS(x) namespace x {
#define ENDS(x) }

BEGINS(test) 

const int threshold = 16;

class RandomIter {
public :
    RandomIter(int *ptr) : ptr(ptr) {}
    int &operator*() { return *ptr; }
    RandomIter operator-(int x) { return RandomIter(ptr - x); }
    RandomIter operator+(int x) { return RandomIter(ptr + x); }
    int operator-(const RandomIter &iter) { return ptr - iter.ptr; }
    RandomIter &operator++() { ++ptr; return *this; }
    RandomIter &operator--() { --ptr; return *this; }
    bool operator<(const RandomIter &iter) const {
        return ptr < iter.ptr;
    }
    bool operator>(const RandomIter &iter) const {
        return iter < *this;
    }
    bool operator<=(const RandomIter &iter) const {
        return !(iter < *this);
    }
    bool operator>=(const RandomIter &iter) const {
        return !(*this < iter);
    }
    bool operator==(const RandomIter &iter) const {
        return !(*this < iter) && !(iter < *this);
    }
    bool operator!=(const RandomIter &iter) const {
        return !(*this == iter);
    }
private:
    int *ptr;
};

void intro_loop(RandomIter first, RandomIter last, function<bool(int, int)> cmp = less<int>()) {
    while (last - first > threshold) {
        RandomIter x = first, y = last - 1;
        int z = *first;
        do {
            while (cmp(*x, z)) ++x;
            while (cmp(z, *y)) --y;
            if (x <= y) {
                swap(*x, *y);
                ++x, --y;
            }
        } while (x <= y);
        intro_loop(x, last, cmp);
        last = y + 1;
    }
    return ;
}

void insertion_sort(RandomIter first, RandomIter last, function<bool(int, int)> cmp = less<int>()) {
    RandomIter ind = first;
    for (RandomIter x = first + 1; x < last; ++x) {
        if (cmp(*x, *ind)) ind = x;
    }
    while (ind != first) {
        swap(*ind, *(ind - 1));
        --ind;
    }
    for (RandomIter x = first + 2; x < last; ++x) {
        RandomIter j = x;
        while (cmp(*j, *(j - 1))) {
            swap(*j, *(j - 1));
            --j;
        }
    }
    return ;
}

void sort(RandomIter first, RandomIter last, function<bool(int, int)> cmp = less<int>()) {
    intro_loop(first, last, cmp);
    insertion_sort(first, last, cmp);
}

ENDS(test)


int main() {


    return 0;
}
