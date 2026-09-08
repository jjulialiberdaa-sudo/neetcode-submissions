class Solution:

    def encode(self, strs: List[str]) -> str:
        self.lengths = [len(s) for s in strs]
        return ''.join(strs)

    def decode(self, s: str) -> List[str]:
        ans = []

        for i in self.lengths:
            ans.append(s[:i])
            s = s[i:]
        
        return ans