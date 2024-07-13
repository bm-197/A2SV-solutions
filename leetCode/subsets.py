class Solution(object):
    def subsets(self, nums):
        def backtrack(s, path):
            ans.append(path[:])
            for i in range(s, len(nums)):
                path.append(nums[i])
                backtrack(i + 1, path)
                path.pop()
        

        ans = []
        backtrack(0, [])
        return ans
        