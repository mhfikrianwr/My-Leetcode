class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        for(int i=0; i<=rowIndex; i++){
            ans.push_back(vector<int>(i+1,1));
        }
        for(int i=1; i<=rowIndex; i++){
            for(int j=1; j<ans[i].size() - 1; j++){
                ans[i][j] = ans[i-1][j] + ans[i-1][j-1];
            } 
        }
        return ans[rowIndex];
    }
};
