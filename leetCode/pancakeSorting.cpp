#include <bits/std++.h>

class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> flips;
        int n = arr.size();
        
        for (int target = n; target > 0; --target) {
            int index = find(arr.begin(), arr.end(), target) - arr.begin();
            
            if (index + 1 == target)
                continue;
            if (index != 0) {
                flips.push_back(index + 1);
                reverse(arr.begin(), arr.begin() + index + 1);
            }
            flips.push_back(target);
            reverse(arr.begin(), arr.begin() + target);
        }
        
        return flips;
    }
};
