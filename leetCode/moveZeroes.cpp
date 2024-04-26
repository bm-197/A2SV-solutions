class Solution {
public:
    void swap(int& n1, int& n2) {
        int tmp = n1;
        n1 = n2;
        n2 = tmp;
    }

    void moveZeroes(vector<int>& nums) {
        int s = 0;

        for (int f = 1; f < nums.size(); ++f) {
            if (nums[s] == 0 and nums[f] != 0) {
                swap(nums[s], nums[f]);
                s++;
            }
            else if (nums[s] != 0) s++;
        }
    }
};