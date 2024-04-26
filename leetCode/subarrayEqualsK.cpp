class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        int subs = 0;

        unordered_set<int> prefixSumSet;
        prefixSumSet.insert(0);

        int prefixSum = 0;

        for (int num : nums) {
            prefixSum += num;
            int target = prefixSum - k;
            if (prefixSumSet.count(target)) {
                subs += 1;
            }
            prefixSumSet.insert(prefixSum);
        }

        return subs;
    }
};
