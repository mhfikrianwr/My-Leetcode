class Solution {
    public int lengthOfLIS(int[] nums) {
        List<Integer> ans = new ArrayList<>();
        for(int i = 0; i < nums.length; i++){
            if(i == 0) ans.add(nums[i]);
            else{
                if(nums[i] > ans.get(ans.size() - 1)) ans.add(nums[i]);
                else{
                    int indx = bs(ans,nums[i]);
                    ans.set(indx,nums[i]); 
                }
            }
        }
        return ans.size();
    }
    public int bs(List<Integer> ans, int c){
        int l = 0, r = ans.size() - 1;
        int mid = 0;
        int z = 0;
        while(l <= r){
            mid = l + (r - l) / 2;
            if(ans.get(mid) >= c){
                z = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return z;
    }
}