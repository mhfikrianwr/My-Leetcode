class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:

        dp = []
        for i in range(0,len(grid)):
            dp.append([])
            for y in range(0,len(grid[i])):
                z = 0
                if i == 0 and y == 0:
                    z = grid[i][y]
                elif i == 0:
                    z = grid[i][y] + dp[i][y - 1]
                elif y == 0:
                    z = grid[i][y] + dp[i - 1][y]
                else:
                    z = grid[i][y] + min(dp[i-1][y],dp[i][y - 1])
                dp[i].append(z)

        return dp[len(grid) - 1][len(grid[0]) - 1]