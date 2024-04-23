class Solution:
    def isPalindrome(self, x: int) -> bool:
        tmp = str(x)

        return (tmp == tmp[::-1]) 