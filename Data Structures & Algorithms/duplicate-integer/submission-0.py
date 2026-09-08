class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        for i in set(nums):
            if nums.count(i) > 1:
                return True
        return False