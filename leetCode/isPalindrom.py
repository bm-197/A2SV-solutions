class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        tmp1 = str(s).lower()
        tmp2= ''.join(c for c in tmp1 if c.isalpha() or c.isdigit())
        if tmp2 == tmp2[::-1]:
            return True
        return False