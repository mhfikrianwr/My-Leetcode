class Solution {
    public int maxProfit(int[] prices) {
        int ans = 0; 
        int mn = prices[0];
        for(int i = 1; i < prices.length; i++){
            ans = Math.max(ans, (prices[i] - mn));
            mn = Math.min(mn,prices[i]);
        }
            return ans;
    }
}