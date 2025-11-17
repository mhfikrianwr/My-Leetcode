int maxProfit(int* prices, int pricesSize) {
    int ans = 0;
    int mn = prices[0];
    for(int i =  1; i < pricesSize; i++){
        ans = fmax(ans, prices[i] - mn);
        mn = fmin(mn, prices[i]);
    }
    return ans;
}