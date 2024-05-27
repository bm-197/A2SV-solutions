class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        partial_sum(begin(nums), end(nums), begin(nums));
        return nums;
    }
};