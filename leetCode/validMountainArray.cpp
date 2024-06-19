class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int n = arr.size();
        if (n < 3) return false;
        
        auto max_it = max_element(arr.begin(), arr.end());
        int idx = distance(arr.begin(), max_it);

        int i = idx - 1, j = idx + 1;

        if (i < 0 || j > n - 1) return false;

        while (i >=0 || j <= n - 1) {
            if (i >= 0 && arr[i] >= arr[i + 1]) return false;
            if (j <= n - 1 && arr[j] >= arr[j - 1]) return false;
            --i, ++j;
        }
        return true;

    }
};