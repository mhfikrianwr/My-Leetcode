class Solution {
public:
    int climbStairs(int n) {
        int prev_1 = 1;
        int prev_2 = 1;
        if(n == 1) return 1;
        for(int i=2; i<=n; i++){
            int a = prev_2;
            prev_2 = prev_1 + prev_2;
            prev_1 = a;
        }
        return prev_2;
    }
};