// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n;
        bool found = false;
        int mid;
        while(l < r && !found){
            mid = l + (r-l)/2;
            if(isBadVersion(mid)){
                found = true;
            }else{
                l = mid + 1;
            }
        }
        while(isBadVersion(mid)){
            mid--;
        }
        return mid + 1;
    }
};