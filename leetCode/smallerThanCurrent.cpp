class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int size = nums.size();
        int count = 0;

        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end(), greater<int>());

        vector<int> smalls;
        
        unordered_map<int, int> cmap;

        for(int i = 0; i < size; ++i) cmap[sortedNums[i]] = (size - i) - 1;

        for(auto num: nums) smalls.push_back(cmap[num]);

        return smalls;
    }
};