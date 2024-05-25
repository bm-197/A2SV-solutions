class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        k = 0
        count = 1 if s else 0
        for i in range(1, len(s)):
            if s[i] not in s[k: i]:
                count = max(count, i - k + 1)
            else:
                while s[i] != s[k]:
                        k+=1
                if s[i] not in s[k: i]:
                    count = max(count, i - k + 1)
                else: k+=1
        return count
