#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> cnt;

        for (int i : nums) {
            cnt[i]++;
        }

        vector<pair<int,int>> arr;

        for (const auto& p : cnt) {
            arr.push_back({p.second, p.first});
        }

        sort(arr.begin(), arr.end());

        vector<int> ans;

        for (int i = arr.size() - 1; k > 0; i--, k--) {
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};