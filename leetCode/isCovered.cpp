class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        set<int> nums;
        for (int i = 0; i < ranges.size(); ++i) {
            for (int j = ranges[i][0]; j <= ranges[i][1]; ++j) {
                nums.insert(j);
            }
        }

        for (int i = left; i <= right; ++i) {
            if (nums.count(i) <= 0) return false;
        }
        return true;
    }
};