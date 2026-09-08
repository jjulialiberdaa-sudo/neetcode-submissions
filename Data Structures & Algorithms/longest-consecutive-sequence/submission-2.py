class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:

        if not nums:
            return 0

        nums = list(set(nums))
        nums.sort()
        n = len(nums)

        longest = 0
        cur = 1

        for i in range(1,n):
            if nums[i-1]+1 == nums[i]:
                cur += 1
            else:
                longest = max(longest,cur)
                cur = 1
        
        return max(longest,cur)