#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int maxOnes = 0, ones=0, zeros = 0, l = 0, r = 0;
        while (r < nums.size()) {
            if (nums[r] == 0) zeros++;
            if (zeros > k) {
                while (nums[l] != 0) l++;
                l++, zeros--;
            }
            ones = r - l + 1;
            maxOnes = max(maxOnes, ones);
            r++;
        }

        return maxOnes;
    }
};
