#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        sort(people.begin(), people.end());
        int l  = 0, r = people.size() - 1, boats = 0;

        while (l <= r)
        {
            if (people[l] + people[r] <= limit) l++;
            boats++;
            r--;
        }
        return boats;
    }
};
