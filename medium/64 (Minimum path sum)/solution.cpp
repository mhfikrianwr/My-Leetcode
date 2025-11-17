class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n));
        for(int i=0; i<m; i++){
            for(int y=0; y<n; y++){
                dp[i][y] = grid[i][y];
            }
        }
        for(int i=1; i<m; i++){
            dp[i][0] += dp[i-1][0];
        }
         for(int i=1; i<n; i++){
            dp[0][i] += dp[0][i-1];
        }
        for(int i=1; i<m; i++){
            for(int y=1; y<n; y++){
                dp[i][y] += min(dp[i-1][y],dp[i][y-1]);
            }
        }
        return dp[m-1][n-1];
    }
};