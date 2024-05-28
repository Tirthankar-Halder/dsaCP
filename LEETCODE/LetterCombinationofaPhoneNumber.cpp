#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
void letterCombinations(string digits) {
;
    unordered_map<char, string> hash = {
        {'2',"abc"},
        {'3',"def"},
        {'4',"ghi"},
        {'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9',"wxyz"}
    };
    
    vector<string> out;
    // cout<<digits[0];
    // cout<<hash[digits[0]];
    // cout<<hash['2'][i]+hash['3'][j];
    for(int k=0;k<digits.length()-1;k++){
        for(int i=0;i<hash[digits[k]].length();i++){
            for(int j =0;j<hash[digits[k+1]].length();j++){
                out[i+j] += hash[digits[k]][i];
                out[i+j] += hash[digits[k+1]][j];
                // cout<<hash[digits[k]][i]<<hash[digits[k+1]][j]<<endl;
            
            }
    }
    for(auto ch:out){
        cout<<ch<<endl;
    }
    // cout<<hash['2'][i]+hash['3'][j];
    // for(int i = 0;i<digits.length();i++){
    //     hash[digits[i]][0]
    // }
    }
    
}
int main()
{

   string phNumber= "234";
   letterCombinations(phNumber);

   return 0;

}