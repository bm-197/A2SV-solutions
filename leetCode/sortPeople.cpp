class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        map<int, string> hmap;

        for (int i = 0; i < heights.size(); ++i) {
            hmap[heights[i]] = names[i];
        }
        vector<string> vals;

        for (auto it = hmap.rbegin(); it != hmap.rend(); ++it) {
            vals.push_back(it->second);
        }

        return vals;
    }
};