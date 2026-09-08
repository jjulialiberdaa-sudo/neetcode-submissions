class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        n = len(heights)
        ans = 0

        for i in range(n):
            h = heights[i]

            right = i+1
            while right < n and h <= heights[right]:
                right += 1
            
            left = i-1
            while left >= 0 and h <= heights[left]:
                left -= 1

            ans = max(ans, h*(right-left-1))

        return ans