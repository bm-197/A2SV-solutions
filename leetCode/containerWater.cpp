#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        int l = 0, r = height.size() - 1, maxWater = 0;

        while(l < r) {
            int curArea = min(height[l], height[r]) * (r - l);
            maxWater = max(maxWater, curArea);

            if (height[l] < height[r]) l++;
            else r--;
        }
        return maxWater;
    }
};

int main() {
    Solution sol;

    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << sol.maxArea(height);

    return 0;
}