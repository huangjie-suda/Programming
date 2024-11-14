/*************************************************************************
	> File Name: 28.HZOJ-41.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 05 Nov 2024 12:19:47 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

class BigInt : public vector<int> {
public :
    BigInt() { push_back(0); }
    BigInt(int x) {
        push_back(x);
        proccess_digit();
    }
    BigInt &operator+=(const BigInt &a) {
        for (int i = 0; i < a.size(); i++) {
            if (i < size()) at(i) += a[i];
            else push_back(a[i]);
        }
        proccess_digit();
        return *this; 
    }
    BigInt &operator*=(const int x) {
        for (int i = 0; i < size(); i++) at(i) *= x;
        proccess_digit();
        return *this;
    }
    BigInt operator*(const int x) {
        BigInt ret(*this);
        ret *= x;
        return ret;
    }
private:
    void proccess_digit() {
        for (int i = 0; i < size(); i++) {
            if (at(i) < 100000) continue;
            if (i + 1 == size()) push_back(0);
            at(i + 1) += at(i) / 100000;
            at(i) %= 100000;
        }
        return ;
    }
};

ostream &operator<<(ostream &out, const BigInt &a) {
    out << a[a.size() - 1];
    for (int i = int(a.size()) - 2; i >= 0; i--) {
        int num = a[i];
        for (int j = 10000; j > 0; j /= 10) {
            out << a[i] % (j * 10) / j;
        }
    }
    return out;
}

#define MAX_N 1000
#define MAX_K 10
BigInt f[MAX_N + 5][MAX_K + 5];

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    f[1][0] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < k; j++) {
            f[i][j] = 0;
            for (int c = 0; c < k; c++) {
                if (c == j) continue;
                f[i][j] += f[i - 1][c];
            }
        }
    }
    BigInt sum = 0;
    for (int i = 1; i < k; i++) sum += f[n][i];
    cout << sum * k << endl;
    return 0;
}
