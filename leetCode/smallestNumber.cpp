class Solution {
public:
    long long smallestNumber(long long num) {
        bool isNegative = num < 0;
        num = abs(num);

        string numStr = to_string(num);
        vector<char> digits(numStr.begin(), numStr.end());

        sort(digits.begin(), digits.end());

        if (!isNegative) {
            if (digits[0] == '0') {
                for (size_t i = 1; i < digits.size(); ++i) {
                    if (digits[i] != '0') {
                        swap(digits[0], digits[i]);
                        break;
                    }
                }
            }
        } else {
            sort(digits.rbegin(), digits.rend());
        }

        string resultStr(digits.begin(), digits.end());
        int result = stoi(resultStr);

        if (isNegative) {
            result = -result;
        }

        return result;
    }
};