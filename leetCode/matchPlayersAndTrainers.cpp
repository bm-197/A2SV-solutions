#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int sizep = players.size(), sizet = trainers.size(), i, j, c = 0;
        
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        for (i = sizep - 1, j = sizet - 1; i >= 0 && j >=0; --i) {
            if (players[i] <= trainers[j]) c++, j--;       
        }
        return c;
    }
};