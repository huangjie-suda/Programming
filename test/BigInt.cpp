/*************************************************************************
	> File Name: BigInt.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Wed 23 Oct 2024 03:29:57 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

class BigInt : public vector<int> {
public :
    BigInt(int x) {
        this->push_back(x);
        proccess_digit();
        return ;
    }
    BigInt operator/(int x) {
        BigInt ret(*this);
        int y = 0;
        for (int i = size() - 1; i >= 0; i--) {
            y = y * 10 + at(i);
            ret[i] = y / x;
            y %= x;
        }
        ret.proccess_digit();
        return ret;
    }
    void operator*=(int x) {
        for (int i = 0; i < size() - 1; i++) at(i) *= x;
        proccess_digit();
        return ;
    }
    bool operator>(const BigInt &a) {
        if (size() != a.size()) return size() > a.size();
        for (int i = size() - 1; i >= 0; i--) {
            if (at(i) != a[i]) return at(i) > a[i];
        }
        return false;
    }
    void proccess_digit() {
        for (int i = 0; i < size(); i++) {
            if (at(i) < 10) continue;
            if (i + 1 == size()) this->push_back(0);
            at(i + 1) += at(i) / 10;
            at(i) %= 10;
        }
        while (size() > 1 && at(size() - 1) == 0) this->pop_back();
    }
};

int main() {



    return 0;
}
