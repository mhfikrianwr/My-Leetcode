int minPathSum(int** grid, int gridSize, int* gridColSize) {
    int **dp = malloc(gridSize * sizeof(int*));
    for(int i = 0; i < gridSize; i++){
        dp[i] = malloc(gridColSize[i]*sizeof(int));
        for(int y = 0; y < gridColSize[i]; y++){
            if(i == 0 && y == 0) dp[i][y] = grid[i][y];
            else if(i == 0) dp[i][y] = grid[i][y] + dp[i][y - 1];
            else if(y == 0) dp[i][y] = grid[i][y] + dp[i - 1][y];
            else dp[i][y] = grid[i][y] + fmin(dp[i - 1][y], dp[i][y - 1]);
        }
    }
    return dp[gridSize - 1][gridColSize[0] - 1];
}