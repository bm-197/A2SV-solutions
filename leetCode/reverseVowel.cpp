class Solution {
public:
    void swap(char& n1, char& n2) {
        char tmp = n1;
        n1 = n2;
        n2 = tmp;
    }

    string reverseVowels(string s) {
        int l = 0, r = s.length() - 1;
        vector<char> s_list(s.begin(), s.end());
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        while (l <= r) {
            if (vowels.count(s_list[l]) > 0 && vowels.count(s_list[r]) > 0) {
                swap(s_list[l], s_list[r]);
                l++, r--;
            }
            else {
                if (vowels.count(s_list[l]) == 0) l++;
                if (vowels.count(s_list[r]) == 0) r--;
            }
        }

        stringstream ss;
        for (const auto& n: s_list) ss << n;

        return ss.str();
    }
};