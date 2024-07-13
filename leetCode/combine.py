class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        def backtrack(fNum, comb):
            if len(comb) == k:
                res.append(comb[:])
                return
            
            for i in range(fNum, n + 1):
                comb.append(i)
                backtrack(i + 1, comb)
                comb.pop()

        res = []
        backtrack(1, [])

        return res