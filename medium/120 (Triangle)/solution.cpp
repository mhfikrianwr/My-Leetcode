class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(triangle.size()); 
        int ans = 1e9;
        for(int i=0; i<triangle.size(); i++){
            for(int j = 0; j < triangle[i].size(); j++){
                if(i == 0 ){
                    dp[i].push_back(triangle[i][j]);
                }else{
                    if(j == 0){
                        int b = dp[i-1][j] + triangle[i][j];
                        dp[i].push_back(b);
                    }else if(j == triangle[i].size() - 1){
                        int b = dp[i-1][j-1] + triangle[i][j];
                        dp[i].push_back(b);
                    }else{
                        int a = dp[i-1][j] + triangle[i][j];
                        int b = dp[i-1][j-1] + triangle[i][j];
                        dp[i].push_back(min(a,b));
                    }
                }
            }
        }
        for(int i=0; i<triangle[triangle.size() - 1 ].size() ; i++){
            ans = min(ans,dp[triangle.size()-1][i]);
        }
        return ans;
    }
};