class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        set<pair<int, int>> wset;
        set<pair<int, int>> gset;

        for (auto& g: guards) {
            gset.insert({g[0], g[1]});
        }
        for (auto& w: walls) {
            wset.insert({w[0], w[1]});
        }

        set<pair<int, int>> grd;

        for (auto g: guards) {
            int i = g[0] - 1;
            int j = g[1];

            while (i >= 0) {
                if (gset.count({i, j}) > 0) break;

                if (wset.count({i, j}) <= 0) {
                    grd.insert({i, j});
                    i--;
                }
                else break;
            }
            i = g[0] + 1;

            while (i < m) {
                if (gset.count({i, j}) > 0) break;

                if (wset.count({i, j}) <= 0) {
                    grd.insert({i, j});
                    i++;
                }
                else break;
            }
            j = g[1] - 1;
            i = g[0];

            while (j >= 0) {
                if (gset.count({i, j}) > 0) break;

                if (wset.count({i, j}) <= 0) {
                    grd.insert({i, j});
                    j--;
                }
                else break;
            }
            j = g[1] + 1;

            while (j < n) {
                if (gset.count({i, j}) > 0) break;

                if (wset.count({i, j}) <= 0) {
                    grd.insert({i, j});
                    j++;
                }
                else break;
            }

        }
        return m * n - (wset.size() + gset.size() + grd.size());
    }
};