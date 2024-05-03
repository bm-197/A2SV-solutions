#include <bits/stdc++.h>

class Solution {
public:
    int Common(int target, vector<int>& arr) {
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target)
                return target;
            else if (arr[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int common;
        for (int i = 0; i < nums1.size(); ++i) {
            common = Common(nums1[i], nums2);
            if (common == nums1[i]) break;
        }
        return common;
    }
};