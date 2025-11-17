class Solution {
public:
    int arrangeCoins(int n) {
        long nn = long(n);
        //using binary search
        long l = 1, r = nn;
        while(l < r){
            long mid = l + (r-l)/2;
            long long minim;
            minim = (mid*(mid+1))/2;

            if(minim < nn){
                l = mid + 1;
            }else if(minim == nn){
                return mid;
            }else{
                r = mid - 1;
            }
        }
        if(((r*(r+1))/2) > nn) return r - 1;
        else return r;
        // return r;
    }
};