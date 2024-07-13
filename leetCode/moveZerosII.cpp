class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0, r = l + 1;

        while (r < nums.size()) {
            if (nums[l] == 0 && nums[r] != 0) {
                swap(nums[l], nums[r]);
                l++;
            }
            r++;
        }
    }
};