class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        for(int i = 0; i < n; i++){
            if(i == 0) v.push_back(nums[i]);
            else{
                if(nums[i] > v.back()) v.push_back(nums[i]);
                else{
                    int lb = lower_bound(v.begin(),v.end(), nums[i]) - v.begin();
                    v[lb] =  nums[i];
                }
            }
        }
        return v.size();
    }
};