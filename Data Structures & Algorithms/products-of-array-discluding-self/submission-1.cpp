#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1, zeros = 0;
        for(int i : nums){
            if(i != 0){
                product *= i;
            }else{
                zeros++;
            }
        }

        if(zeros>1){return vector<int>(nums.size(), 0);}

        vector<int> ans;
        if(zeros==1){
            for(int i : nums){
                ans.push_back(i != 0 ? 0 : product);
            }
        }else{
            for(int i : nums){
                ans.push_back(product/i);
            }
        }

        return ans;
    }
};
