#include <bits/stdc++.h>

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int coins = 0, n = piles.size() / 3;
        deque<int> pilesDeque(piles.begin(), piles.end());
        
        sort(pilesDeque.begin(), pilesDeque.end());

        for (int i = 0; i < n; ++i) {
            pilesDeque.pop_back();
            coins += pilesDeque.back();
            pilesDeque.pop_back();
            pilesDeque.pop_front();
        }

        return coins;

    }
};