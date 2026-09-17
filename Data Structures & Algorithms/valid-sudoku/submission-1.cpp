#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> s_cols(9);
        vector<unordered_set<char>> s_squares(9);

        for(int r = 0; r < 9; r++){
            unordered_set<char> s_row;

            for(int c = 0; c < 9; c++){

                if(board[r][c] != '.'){
                    if(s_row.count(board[r][c]) or
                    s_cols[c].count(board[r][c]) or
                    s_squares[(r/3)*3+(c/3)].count(board[r][c])){
                        return false;
                    }else{
                        s_row.insert(board[r][c]);
                        s_cols[c].insert(board[r][c]);
                        s_squares[(r/3)*3+(c/3)].insert(board[r][c]);
                    }
                }
                
            }
        }
        return true;
    }
};