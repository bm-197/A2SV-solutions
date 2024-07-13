class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        sort(costs.begin(), costs.end());
        int iceCream = 0;
        int cost = 0;
        
        for (int i = 0; i < costs.size(); ++i) {
            cost += costs[i];
            if (cost > coins) break;
            iceCream++;
        }

        return iceCream;
    }
};