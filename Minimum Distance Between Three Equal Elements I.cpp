#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> pos;

        for (int i = 0; i < nums.size(); i++) {
            pos[nums[i]].push_back(i);
        }

        long long ans = LLONG_MAX;
        bool found = false;

        for (auto &p : pos) {
            vector<int> &v = p.second;
            if (v.size() < 3) continue;

            for (int i = 0; i + 2 < v.size(); i++) {
                long long dist = 2LL * (v[i + 2] - v[i]);
                ans = min(ans, dist);
                found = true;
            }
        }

        return found ? (int)ans : -1;
    }
};
