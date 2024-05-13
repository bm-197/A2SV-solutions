class Solution {
public:
    vector<int> partitionLabels(string s) {
        // Store the last index of each character in the string
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        unordered_map<char, int> lastIndex;
        for (int i = 0; i < s.length(); ++i) {
            lastIndex[s[i]] = i;
        }

        vector<int> partitions;
        int start = 0, end = 0;
        for (int i = 0; i < s.length(); ++i) {
            end = max(end, lastIndex[s[i]]);
            if (i == end) {
                partitions.push_back(end - start + 1);
                start = end + 1;
            }
        }

        return partitions;
    }

};