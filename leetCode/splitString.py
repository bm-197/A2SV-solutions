class Solution:
    def splitString(self, s: str) -> bool:
        def search(i, prev, k):
            if i == len(s):
                return k > 1  
            curr = ""
            for j in range(i, len(s)):
                curr += s[j]
                if prev == -1 or int(prev) - int(curr) == 1:
                    if search(j + 1, curr, k + 1):
                        return True

            return False

        return search(0, -1, 0)