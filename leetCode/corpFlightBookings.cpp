class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> answer(n, 0);

        for (const auto& booking: bookings) {
            for (int i = booking[0] - 1; i < booking[1]; ++i) {
                answer[i]+=booking[2];
            }
        }
        return answer;
    }
};