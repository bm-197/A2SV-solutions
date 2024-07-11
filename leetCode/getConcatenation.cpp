class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int s = nums.size();

        for (int i = 0; i < s; ++i) {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};