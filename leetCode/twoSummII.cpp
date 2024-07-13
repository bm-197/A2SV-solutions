class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int l = 0, r = numbers.size() - 1;

        while (l < r) {
            if (numbers[l] + numbers[r] > target) {
                r--;
            }
            else if (numbers[l] + numbers[r] < target) {
                l++;
            }
            else break;
        }
        return {++l, ++r};
    }
};