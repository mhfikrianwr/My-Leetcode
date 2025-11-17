class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:

        l = len(nums)
        ans = 0
        lowest = False
        for i in range(l):
            if(nums[i] == target):
                ans = i
                return i
            if(nums[i] >= target and not lowest):
                lowest = True
                ans = i

        if(not lowest): return l
        else: return ans
            
        