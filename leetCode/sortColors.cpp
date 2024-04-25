#include <bits/std++.h>

class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> cmap;

        for (auto num: nums) {
            if (cmap.count(num) > 0) cmap[num]++;
            else cmap[num] = 1;
        }
        int i = 0, j = 0, k = 0;

        for (; i < nums.size(); ++i) {
            if (i < cmap[0]) nums[i] = 0;
            else if (j < cmap[1]) {
                nums[i] = 1;
                j++;
            }
            else {
                nums[i] = 2;
                k++;
            }
        }   
    }
};