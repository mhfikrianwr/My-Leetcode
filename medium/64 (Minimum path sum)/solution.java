class Solution {
    public int minPathSum(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        int [][]dp = new int[n][m];
        for(int i = 0; i < n; i++){
            for(int y = 0; y < m; y++){
                if(i == 0 && y == 0) dp[i][y] = grid[i][y];
                else if(i == 0) dp[i][y] = dp[i][y - 1] + grid[i][y];
                else if(y == 0) dp[i][y] = dp[i - 1][y] + grid[i][y];
                else dp[i][y] = grid[i][y] + Math.min(dp[i-1][y],dp[i][y - 1]);
            }
        }
        return dp[n - 1][m - 1];
    }
}