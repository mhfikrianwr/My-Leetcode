class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        pascals = []
        count = 0
        for i in range(0, numRows):
            pascals.append([])
            pascals[i].append(1)
            for y in range(1, count):
                pascals[i].append(pascals[i - 1][y - 1] + pascals[i - 1][y])

            if(i > 0):
                 pascals[i].append(1)
            count += 1
        return pascals