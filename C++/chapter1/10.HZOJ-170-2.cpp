/*************************************************************************
	> File Name: 11.HZOJ-170-2.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Thu 01 Aug 2024 10:41:51 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, pos;
    string s, olds = "Ban_smoking", news = "No_smoking";
    cin >> n;
    while (n--) {
        cin >> s;
        do {
            pos = s.find(olds);
            if (pos == -1) break;
            s.replace(pos, olds.size(), news);
        } while (1);
        cout << s << endl;
    }
    
    return 0;
}
