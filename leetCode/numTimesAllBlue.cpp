class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int n = flips.size(), cnt = 0, mx = 0;

        for (int i = 1; i <= n; ++i) {
            mx = max(flips[i - 1], mx);
        
            if (mx == i) {
                cnt++;
            }
        }
        return cnt;
    }
};