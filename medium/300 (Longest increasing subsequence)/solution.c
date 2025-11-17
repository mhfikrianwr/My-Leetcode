int bs(int* ans, int num, int size){
    int l = 0, r = size - 1;
    int z = 0;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(num <= ans[mid]){
            z = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return z;
}
int lengthOfLIS(int* nums, int numsSize) {
    int* ans = malloc(1*sizeof(int));
    ans[0] = nums[0];
    int sz = 1;
    for(int i = 1; i<numsSize; i++){
        if(ans[sz - 1] < nums[i]){
            sz++;
            ans = realloc(ans,sz*sizeof(int));
            ans[sz - 1] = nums[i];
        }else{
            int indx = bs(ans,nums[i],sz);
            ans[indx] = nums[i];
        }
    }
    return sz;
}