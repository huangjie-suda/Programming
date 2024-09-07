/*************************************************************************
	> File Name: 6.cout_any_type.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 01 Aug 2024 03:58:06 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

struct Point {
    int x, y;
};

ostream &operator<<(ostream &out, const Point &p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}

int main() {
    Point p1 = {3, 4}, p2 = {5, 99};
    printf("p1 = (%d, %d)\n", p1.x, p1.y);
    printf("p2 = (%d, %d)\n", p2.x, p2.y);
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;
    return 0;
}
