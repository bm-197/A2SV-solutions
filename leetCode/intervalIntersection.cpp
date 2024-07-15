#include <vector>
#include <algorithm> // For std::max and std::min

using namespace std;

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> intersec;
        int j = 0;

        for (const auto& interval : firstList) {
            int s = interval[0];
            int e = interval[1];

            while (j < secondList.size()) {
                if (s <= secondList[j][1] && e >= secondList[j][0])
                    intersec.push_back({max(s, secondList[j][0]), min(e, secondList[j][1])});

                if (secondList[j][1] < e) {
                    j++;
                } else {
                    break;
                }
            }
        }

        return intersec;
    }
};
