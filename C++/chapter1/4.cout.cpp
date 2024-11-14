/*************************************************************************
	> File Name: 4.cout.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 01 Aug 2024 03:04:26 PM CST
 ************************************************************************/

#include <iostream> // intput output stream
#include <iomanip>
using namespace std;

int main() {
    int a = 123;
    cout << "hello world" << endl;
    cout << a << endl;
    cout << "a = " << a << endl;

    double b = 12.345;
    cout << b << endl;
    printf("%%lf = %lf\n", b);
    printf("%%g = %g\n", b);
    cout << setprecision(4) << b << endl;
    cout << fixed << setprecision(1) << b << endl;
    return 0;
}
