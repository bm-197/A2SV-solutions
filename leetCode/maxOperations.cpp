#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int l = 0, r = nums.size() - 1, op = 0;
        sort(nums.begin(), nums.end());

        while (l < r) {
            if (nums[l] + nums[r] < k) l++;
            else if (nums[l] + nums[r] > k) r--;
            else l++, r--, op++;
        }
        return op;
    }
};