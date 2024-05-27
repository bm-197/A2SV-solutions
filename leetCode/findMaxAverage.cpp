class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = 0;
        if(nums.size() < k) {
            return -1;
        }

        for (int  i = 0; i < k; ++i) {
            avg += nums[i];
        }
        double maxx = avg;
        for(int i = k; i < nums.size(); ++i)
        {
            avg = avg + nums[i];
            avg = avg - nums[i-k];
            maxx = max(avg, maxx);
        }
        return maxx / k;
    }
};