/*************************************************************************
	> File Name: 1.brute_force.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sat 09 Nov 2024 11:57:31 AM CST
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <unordered_map>
using namespace std;

#define MOD 9973
#define BASE 131

int hash_func(string s) {
    int h = 0;
    for (int i = s.size() - 1, kbase = 1; i >= 0; i--) {
        h = (h + s[i] * kbase) % MOD;
        kbase = kbase * BASE % MOD;
    }
    return h;
}

void RabinKarp(string s, vector<string> t) {
    unordered_map<int, vector<int>> thash;
    for (int i = 0; i < t.size(); i++) thash[hash_func(t[i])].push_back(i);
    int tlen, nbase = 1;
    for (tlen = 0; t[0][tlen]; tlen++) nbase = nbase * BASE % MOD;
    for (int i = 0, h = 0; s[i]; i++) {
        h = h * BASE + s[i];
        if (i >= tlen) h = (h - s[i - tlen] * nbase % MOD + MOD) % MOD;
        if (i + 1 < tlen) continue;
        if (thash.find(h) == thash.end()) continue;
        for (int j = 0; j < thash[h].size(); j++) {
            if (strncmp(s.c_str() + i - tlen + 1, t[thash[h][j]].c_str(), tlen) == 0) {
                printf("pos %d : %s\n", i - tlen + 1, t[thash[h][j]].c_str());
            }
        }
    }
    return ;
}


int main() {
    string s;
    vector<string> t(100);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> t[i];
    while (cin >> s) {
        RabinKarp(s, t);
    }
    return 0;
}
