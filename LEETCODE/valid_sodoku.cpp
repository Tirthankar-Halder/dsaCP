#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
 bool isValidSudoku(string board) {
        bool res = true;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                for(int k=0;k<board.size();k++){
                    if(board[i][j] == board[i][k] && j != k){
                        res = false;
                    }
                    if(board[i][j] == board[k][j] && i != k){
                        res = false;
                    }
                }
                
                
            }
        }
        return res;
    }
    
};
int main(){
    Solution s;
    
    string board[10][10]= {{"8","3",".",".","7",".",".",".","."}
    ,{"6",".",".","1","9","5",".",".","."}
    ,{".","9","8",".",".",".",".","6","."}
    ,{"8",".",".",".","6",".",".",".","3"}
    ,{"4",".",".","8",".","3",".",".","1"}
    ,{"7",".",".",".","2",".",".",".","6"}
    ,{".","6",".",".",".",".","2","8","."}
    ,{".",".",".","4","1","9",".",".","5"}
    ,{".",".",".",".","8",".",".","7","9"}};
    cout<<s.isValidSudoku(board);
}