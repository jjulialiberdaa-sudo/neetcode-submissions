class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        ans = defaultdict(list)
        for i in strs:
            ans[''.join(sorted(i))].append(i)
        return list(ans.values())
        '''dict = {}
        for i in strs:
            cur = ''.join(sorted(i))
            if cur in dict:
                dict[cur].append(i)
            else:
                dict[cur] = [i]
        
        return [i for i in dict.values()]'''