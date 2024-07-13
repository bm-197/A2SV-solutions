class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(tasks.begin(), tasks.end());
        sort(processorTime.rbegin(), processorTime.rend());
        
        int mx = 0, i = 0, j = 0;
        while (i < tasks.size()){
            int temp = tasks.size()/processorTime.size();
            while(temp--) {
                mx = max(mx, (processorTime[j] + tasks[i++]));
            }
            j++;
        }
        return mx;
    }
};