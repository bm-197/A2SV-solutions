#include <bits/stdc++.h>
#include <vector>

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> winner;
        unordered_map<int, int> loser;
        vector<vector<int>> player;

        for(int i = 0; i < matches.size(); ++i) {
            if (winner.count(matches[i][0]) > 0) winner[matches[i][0]] += 1;
            else winner[matches[i][0]] = 1;

            if (loser.count(matches[i][1]) > 0) loser[matches[i][1]] += 1;
            else loser[matches[i][1]] = 1;
        }

        vector<int> won;
        for(const auto& [key, val]: winner) {
            if (loser.count(key) == 0) won.push_back(key);
        }
        sort(won.begin(), won.end());
        player.push_back(won);

        vector<int> loss;
        for(const auto& [key, val]: loser) {
            if (loser[key] == 1) loss.push_back(key);
        }
        sort(loss.begin(), loss.end());
        player.push_back(loss);

        return player;
    }
};