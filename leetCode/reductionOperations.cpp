class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        // sort(nums.begin(), nums.end());
        // set<int> uniqueElements(nums.begin(), nums.end());
        // int ops = 0;

        // for (auto it = uniqueElements.rbegin(); it != uniqueElements.rend(); ++it) {
        //     int largest = *it;
            
        //     if (largest == *uniqueElements.begin()) break;
            
        //     auto idx = find(nums.begin(), nums.end(), largest);
        //     auto nextIt = next(it);
        //     int nextLargest = *nextIt;
            
        //     while (idx != nums.end()) {
        //         *idx = nextLargest;
        //         idx = find(idx, nums.end(), largest);
        //         ops++;
        //     }
        // }
        sort(nums.begin(), nums.end(), greater<int>());

        int ops = 0;
        int n = nums.size();

        for (int i = 1; i < n; ++i) {
            if (nums[i] != nums[i - 1]) {
                ops += i;
            }
        }

        return ops;
    }
};