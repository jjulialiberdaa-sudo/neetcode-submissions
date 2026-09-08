class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = {}
        for i in nums:
            count[i] = 1 + count.get(i, 0)

        c = []
        for num, cnt in count.items():
            c.append([cnt, num])
        c.sort()

        ans = []
        while len(ans) < k:
            ans.append(c.pop()[1])
            
        return ans