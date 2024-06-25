class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        sort(points.begin(), points.end());

        int area = 0;

        for (int i = 1; i < points.size(); ++i) {
            area = max(area, points[i][0] - points[i - 1][0]);
        }
        return area;
    }
};