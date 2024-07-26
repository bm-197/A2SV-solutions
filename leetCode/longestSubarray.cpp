class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int l = 0, zeros = 0, mx_sub = 0;
        
        for (int r = 0; r < nums.size(); ++r) {
            if (nums[r] == 0) {
                zeros++;
            }
            while (zeros > 1) {
                if (nums[l] == 0) {
                    zeros--;
                }
                l++;
            }
            mx_sub = max(mx_sub, r - l);
        }
        if (mx_sub == nums.size()) {
            mx_sub--;
        }
        
        return mx_sub;
    }
};