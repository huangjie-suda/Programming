/*************************************************************************
	> File Name: 5.leetcode-128.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Sun 20 Oct 2024 03:40:10 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class UnoinSet {
public :
    UnoinSet(int n) : fa(n + 1), size(n + 1) {
        for (int i = 0; i <= n; i++) {
            fa[i] = i;
            size[i] = 1;
        }
    }
    int find(int x) {
        return fa[x] = (fa[x] == x ? x : find(fa[x]));
    }
    int merge(int a, int b) {
        int aa = find(a), bb = find(b);
        if (aa == bb) return 0;
        fa[aa] = bb;
        size[bb] += size[aa];
        return 1;
    }
    vector<int> fa, size;
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size(), cnt = 0;
        UnoinSet u(n);
        unordered_map<int, int> h;
        for (int i = 0; i < n; i++) {
            int x = nums[i];
            if (h.find(x) != h.end()) continue;
            h[x] = (cnt++);
            if (h.find(x + 1) != h.end()) u.merge(h[x], h[x + 1]);
            if (h.find(x - 1) != h.end()) u.merge(h[x], h[x - 1]);
        }
        int ans = 0;
        for (int i = 0; i < cnt; i++) {
            ans = max(ans, u.size[i]);
        }
        return ans;
    }
};
