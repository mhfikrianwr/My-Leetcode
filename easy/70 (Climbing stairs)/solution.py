class Solution:
    def climbStairs(self, n: int) -> int:
        dp = []
        dp.append(0)
        dp.append(1)
        dp.append(2)
        if n <= 2:
            return n
        
        for i in range(3, n+1, 1):
            dp.append(dp[i - 2] + dp[i - 1])
        return dp[n]