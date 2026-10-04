#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0, n = prices.size(), m = prices[n-1];
        for(int i = prices.size()-2; i >= 0; i--){
            p = max(p, m-prices[i]);
            m = max(m, prices[i]);
        }
        return p;
    }
};
