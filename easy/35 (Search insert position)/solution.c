int searchInsert(int* nums, int numsSize, int target) {
    bool lowest = false;
    int ans = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == target){
            return i;
        }
        if(nums[i] >= target && !lowest){
            ans = i;
            lowest = true;
        }
    }
    if(!lowest) return numsSize;
    return ans;
}