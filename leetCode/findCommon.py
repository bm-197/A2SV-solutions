class Solution:
    def commonChars(self, words):
        from collections import Counter
        common_chars_set = Counter(words[0])

        for word in words[1:]:
            common_chars_set &= Counter(word)

        dups = []
        for char, count in common_chars_set.items():
            dups.extend([char] * count)

        return dups