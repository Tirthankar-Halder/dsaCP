#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
string longestCommonPrefix(vector<string>& strs) {
        int len = INT_MAX;
        string res = "";
        for(int i = 0;i<strs.size();i++){
            if(strs[i].size()<len)
                len = strs[i].size();
            
        }
        for(int i=0;i<len;i++){
            char s = strs[0][i];
            bool flag = false;
            for(int j=0;j<strs.size();j++){
                if(s == strs[j][i]){
                    flag = true;
                }else{
                    flag = false;
                }
            }
            if(flag == true){
                res+=s;
            }
            // if(strs[0][i] == strs[1][i] && strs[0][i] == strs[2][i]){
                
            // }
        }
        return res;
    }
int main()
{

   vector<string> strs = {"ab","a"};
   cout<<longestCommonPrefix(strs);

   return 0;

}