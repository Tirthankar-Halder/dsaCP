#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> hash;
        for(int i=0;i<matrix.size();i++){
            for(int j= 0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    // cout<<i<<" "<<j<<endl;
                    hash.push_back({i,j});
                }
            }
            
        }
        // for(auto i:hash){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        // for(auto row:hash){
        //     for(int i=0;i<matrix[row.first].size();i++){
        //         matrix[row.first][i] = 0;
        //     }
        // }
        for(auto col:hash){
            for(int i=0;i<matrix[0].size();i++){
                matrix[i][col.second] = 0;
            }
        }
        // for(int i=0;i<matrix.size();i++){
        //     for(int j= 0;j<matrix[i].size();j++){
        //         cout<<matrix[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
    }
        
        
    
};

int main()
{
    vector<vector<int>> vect
    {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}
    };
    Solution obj;
    // for(int i=0;i<vect.size();i++){
    //         for(int j= 0;j<vect[i].size();j++){
    //             cout<<vect[i][j]<<" ";
                

    //         }
    //         cout<<endl;
    //     }
    obj.setZeroes(vect);
    
   

   return 0;

}