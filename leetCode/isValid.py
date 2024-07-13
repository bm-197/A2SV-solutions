class Solution(object):
    def isValid(self, s):
        s_dict = {')': '(', '}': '{', ']': '['}
        stack = []
        for c in s:
            if c in s_dict:
                if(not stack) or (stack[-1] != s_dict[c]):
                    return False
                stack.pop()
            else:
                stack.append(c)
        return not stack