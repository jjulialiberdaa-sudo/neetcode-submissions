#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0, m = prices[0];
        for(int price : prices){
            p = max(p, price-m);
            m = min(m, price);
        }
        return p;
    }
};
