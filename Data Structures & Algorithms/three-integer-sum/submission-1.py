class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        n = len(nums)
        ans = []

        for i in range(n-2):
            for j in range(i+1,n-1):
                cur = nums[i]+nums[j]
                if -cur in nums[j+1:]:
                    triplet = sorted([nums[i],nums[j],-cur])
                    if triplet not in ans:
                        ans.append(triplet)
        
        return ans