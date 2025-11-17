class Solution {
    public int searchInsert(int[] nums, int target) {
        HashSet<Integer> v = new HashSet<Integer>();
        int b = 0;
        boolean lowest = false;
        boolean found = true;
        for(int i = 0; i < nums.length; i++){
            if(!v.contains(target) && nums[i] == target){
                return i;
            }
            if(nums[i] >= target && !lowest){
                b = i;
                lowest = true;
            }
            v.add(nums[i]);
        }
        if(!lowest) return nums.length;
        return b;
    }
}