class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        l = []
        for i in range(0, (rowIndex + 1)):
            l.append([])
            l[i].append(1)
            for y in range(1, i):
                l[i].append(l[i - 1][y] + l[i - 1][y - 1])
            if(i > 0): l[i].append(1)
        
        return l[rowIndex]