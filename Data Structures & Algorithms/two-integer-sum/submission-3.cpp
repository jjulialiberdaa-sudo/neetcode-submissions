#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp; // num -> most recent idx
        for(int i = 0; i < nums.size(); i++){
            int need = target-nums[i];
            if(mpp.find(need) != mpp.end()){
                return {mpp[need], i};
            }
            mpp[nums[i]] = i;
        }
    return {-1, -1};
    }
};
