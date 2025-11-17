class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        ans = triangle[0][0]
        sz = len(triangle)
        for i in range(1,sz):
            sz2 = len(triangle[i])
            triangle[i][0] = triangle[i][0] + triangle[i - 1][0]
            if i == sz - 1:
                ans = triangle[i][0]
            for y in range(1,sz2 - 1):
                triangle[i][y] = triangle[i][y] + min(triangle[i-1][y], triangle[i-1][y-1])
                if i == sz - 1:
                    ans = min(ans,triangle[i][y])
            triangle[i][sz2 - 1] = triangle[i][sz2 - 1] + triangle[i - 1][sz2 - 2]
            if i == sz - 1:
                ans = min(ans,triangle[i][sz2 - 1])
        return ans
        
        
        