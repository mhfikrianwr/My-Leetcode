class Solution:
    def arrangeCoins(self, n: int) -> int:
        l = 1 
        r = n
        while( l <= r):
            mid = l + int((r - l) / 2)
            val = int((mid *(mid + 1))/2)
            if(val > n): r = mid - 1
            elif(val < n): l = mid + 1
            else: return mid
        if((r * (r + 1))/2 > n): return l
        else: return r
        