#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mpp;
        for(string s : strs){
            string std = s;
            sort(std.begin(), std.end());
            mpp[std].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto p : mpp){
            ans.push_back(p.second);
        }
        return ans;
    }
};
