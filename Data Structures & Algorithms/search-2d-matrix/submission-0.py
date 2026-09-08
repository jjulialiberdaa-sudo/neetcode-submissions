class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m, n = len(matrix), len(matrix[0])
        for row in matrix:
            if row[0] <= target <= row[-1]:
                l, r = 0, n-1
                while l <= r:
                    m = (l+r)//2
                    if target == row[m]:
                        return True
                    if target < row[m]:
                        r = m-1
                    else:
                        l = m+1
        return False