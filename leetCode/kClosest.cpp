class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        vector<pair<int, double>> distPair(points.size());

        for (int i = 0; i < points.size(); ++i) {
            double dist = sqrt(points[i][0] * points[i][0] + points[i][1] * points[i][1]);
            distPair[i] = make_pair(i, dist);
        }
        ranges::nth_element(distPair, next(begin(distPair), k),[](const auto& a, const auto& b) { return a.second < b.second; });

        vector<vector<int>> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(points[distPair[i].first]);
        }       

        return result;
    }
};