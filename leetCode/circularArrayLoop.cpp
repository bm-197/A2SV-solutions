class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();
        
        auto next = [&](int index) {
            return ((index + nums[index]) % n + n) % n;
        };

        for (int i = 0; i < n; ++i) {
            if (nums[i] == 0) continue;
    
            int slow = i, fast = i;

            while (nums[i] * nums[next(fast)] > 0 && nums[i] * nums[next(next(fast))] > 0) {
                slow = next(slow);
                fast = next(next(fast));
                if (slow == fast) {
                    if (slow == next(slow)) break;
                    return true;
                }
            }

            slow = i;
            int val = nums[i];
            while (val * nums[slow] > 0) {
                int temp = slow;
                slow = next(slow);
                nums[temp] = 0;
            }
        }

        return false;
    }
};
