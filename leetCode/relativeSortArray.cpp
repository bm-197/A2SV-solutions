class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        map<int, int> cmap;
        vector<int> sorted;

        for (int i = 0; i < arr1.size(); ++i) cmap[arr1[i]]++;

        for (const auto& i: arr2) {
            int v = cmap[i];

            while (v > 0) {
                sorted.push_back(i);
                --v;
            }
            cmap.erase(i);
        }
        for (const auto& p: cmap) {
            int v = p.second;
            while ( v > 0) {
                sorted.push_back(p.first);
                --v;
            }
        }
        return sorted;
    }
};