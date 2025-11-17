int arrangeCoins(int n) {
    long long l = 1, r = n;
    while(l <= r){
        long long mid = l + (r - l) / 2;
        long long value = (mid * (mid + 1))/2;
        if(value < n) l = mid + 1;
        else if(value > n ) r = mid - 1;
        else return mid;
    }
    if((r*(r + 1)) / 2 > n) return l;
    else return r;
}