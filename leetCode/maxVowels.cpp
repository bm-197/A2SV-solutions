class Solution {
public:
    int maxVowels(string s, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int mx_vowel = 0, vowel = 0;
        
        for (int i = 0; i < k; ++i) {
            if (!isConsonant(s[i])) {
                vowel++;
            }
        }

        mx_vowel = vowel;

        for (int i = k; i < s.size(); ++i) {
            if (!isConsonant(s[i])) {
                vowel++;
            }
            if (!isConsonant(s[i - k])) {
                vowel--;
            }
            mx_vowel = max(mx_vowel, vowel);
        }

        return mx_vowel;
    }
private:
    bool isConsonant(char c) {
        unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u'};
        if (vowel.count(c)) return false;
        return true;
    }
};