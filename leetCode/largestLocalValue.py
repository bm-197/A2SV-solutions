class Solution:
    def maxInMatrix(self, matrix: List[List[int]]) -> List[List[int]]:
        maxx = 0
        for row in matrix:
                num = max(row)
                if maxx < num:
                    maxx = num
        return maxx

    def largestLocal(self, grid: List[List[int]]) -> List[List[int]]:
        localMaxs = []

        for i in range(len(grid) - 2):
            tmp = []
            for j in range(len(grid[i]) - 2):
                local = [[grid[m][n] for n in range(j, j + 3)] for m in range(i, i + 3)]
                maxx = self.maxInMatrix(local)
                tmp.append(maxx)
            localMaxs.append(tmp)
                
        return localMaxs
