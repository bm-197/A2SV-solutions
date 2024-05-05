#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int l = 0, r = skill.size() - 1;
        long long totalChem = 0;

        sort(skill.begin(), skill.end());
        int  prevSum = skill[l] + skill[r];
        
        while (l < r) {
            int curSum = skill[l] + skill[r];

            if (curSum != prevSum) return - 1;

            totalChem += (skill[l] * skill[r]);
            prevSum = curSum;
            l++, r--;
        }

        return totalChem;
    }
};