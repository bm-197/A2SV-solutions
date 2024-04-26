#include <bits/stdc++.h>
#include <sstream>
#include <string>


class Solution {
public:
    void swap(int& n1, int& n2) {
        int tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    string largestNumber(vector<int>& nums) {
        long long n1, n2;
        int size = nums.size();

        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                stringstream s1, s2;

                s1 << to_string(nums[j]) << to_string(nums[j + 1]);
                s2 << to_string(nums[j + 1]) << to_string(nums[j]);

                cout << s1.str() << " " << s2.str() << endl;
                s1 >> n1, s2 >> n2;
                cout << n1 << " " << n2 << endl;
                if (n1 < n2) swap(nums[j], nums[j + 1]);
                cout << nums[j] << " " << nums[j+1] << endl;
            }
        }

        string result;
        for (auto num: nums) result+=to_string(num);

        size_t firstNonZero = result.find_first_not_of('0');
        if (firstNonZero == string::npos) {
        // If all characters are '0', return "0"
            return "0";
        }
        return result;
    }
};