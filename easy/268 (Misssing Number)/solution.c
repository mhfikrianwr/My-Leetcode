int missingNumber(int* nums, int numsSize) {
    int ans = 0;
    for(int i = 0; i <= numsSize; i++){
        ans ^= i;
    }
    // c cannot use for each
    for(int i = 0; i < numsSize; i++) ans ^= nums[i];
    return ans;
}