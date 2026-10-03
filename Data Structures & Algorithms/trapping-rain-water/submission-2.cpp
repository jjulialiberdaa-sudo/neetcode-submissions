#include <algorithm>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0, l = 0, r = height.size()-1, lm = height[0], rm = height[r];
        while(l < r){
            if(lm < rm){
                l++;
                lm = max(lm, height[l]);
                ans += lm - height[l];
            } else {
                r--;
                rm = max(rm, height[r]);
                ans += rm - height[r];
            }
        }
        return ans;
    }
};
