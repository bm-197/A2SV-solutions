class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        for (auto i = 0; i < arr.size() - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
        return true;
    }
};