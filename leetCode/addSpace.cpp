#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string result;
        int spaceIndex = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (spaceIndex < spaces.size() && i == spaces[spaceIndex] + 1) {
                result += ' ';
                ++spaceIndex;
            }
            result += s[i];
        }

        return result;
    }
};


int main() {
    Solution sol;

    string s;
    cin >> s;

    vector<int> v(3);
    for (int i = 0; i < 4; ++i) {
        cin >> v[i];
    }
    // for (const auto& i: v) cout << i << " ";
    // cout << endl;

    // cout << s.substr(1, 5);
    cout << sol.addSpaces(s, v);
    return 0;
}