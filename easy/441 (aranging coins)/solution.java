class Solution {
    public int arrangeCoins(int n) {
        int l = 1, r = n;
        long sz = n;
        while(l <= r){
            int mid = l + (r - l) / 2;
            long val = (((long)mid * ((long)mid + 1))/2);
            if(val > sz){
                r = mid - 1;
            }else if(val < sz){
                l = mid + 1;
            }else{
                return mid;
            }
        }
        if((r * (r + 1) / 2) > n) return l;
        else return r;
    }
}