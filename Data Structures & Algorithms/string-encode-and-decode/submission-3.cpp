#include <vector>
#include <deque>
#include <string>
using namespace std;

class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        string prefix;

        for(string s : strs){
            prefix += to_string(s.size())+',';
            ans += s;
        }

        return prefix+'#'+ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        deque<int> sizes;

        int i = 0;
        string num;

        while(s[i] != '#'){
            if(s[i] == ','){
                sizes.push_back(stoi(num));
                num = "";
            }else{
                num += s[i];
            }
            i++;
        }

        i ++;
        while(!sizes.empty()){
            int cur_s = sizes.front();
            sizes.pop_front();

            string cur;

            while(cur_s > 0){
                cur += s[i];
                i++;
                cur_s--;
            }

            ans.push_back(cur);
        }
        
        return ans;
    }
};
