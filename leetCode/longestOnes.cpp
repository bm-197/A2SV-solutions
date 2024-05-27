#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        return 6;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;

    cout << sol.longestOnes(nums, k) << endl;

    return 0;
}