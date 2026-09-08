class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        nums = sorted(set(nums), key=lambda x: -nums.count(x))
        return nums[:k]