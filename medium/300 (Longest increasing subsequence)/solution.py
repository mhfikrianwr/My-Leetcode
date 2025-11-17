class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        ans = [nums[0]]
        for i in range(1,len(nums)):
            if nums[i] > ans[len(ans) - 1]:
                ans.append(nums[i])
            else:
                indx = self.bs(ans,nums[i])
                ans[indx] = nums[i]
        return len(ans)
    def bs(self, ans: List[int],nums: int) -> int:
        l = 0
        r = len(ans) - 1
        z = 0
        while(l <= r):
            mid = int(l + (r - l) / 2)
            if ans[mid] >= nums:
                z = mid
                r = mid - 1
            else:
                l = mid + 1
        return z