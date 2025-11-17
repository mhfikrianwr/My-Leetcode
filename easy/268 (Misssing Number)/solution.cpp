class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // using XoR
        // a^a = 0
        // a^0 = a
        // example : (1^2^3) ^ (0^1^2^3) = 0
        int ans = 0;
        for(int i=0; i<=nums.size(); i++){
            ans ^= i;
        }        
        for(auto a : nums ) ans ^= a;
        return ans;
    }
};