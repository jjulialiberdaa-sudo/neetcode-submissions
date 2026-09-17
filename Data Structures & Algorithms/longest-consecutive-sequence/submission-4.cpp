#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()){return 0;}

        sort(nums.begin(), nums.end());
        int p = nums[0], ans = 0, cur = 1;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == p){continue;}

            if(nums[i] != p+1){
                ans = max(ans, cur);
                cur = 1;
            }else{
                cur++;
            }
            p = nums[i];
        }
        return max(ans,cur);
    }
};
