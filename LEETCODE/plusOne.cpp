#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
vector<int> plusOne(vector<int>& digits) {
        vector<int>res;
        for(int i=0;i<digits.size();i++){
            res.push_back(digits[i]);
        }
        res[res.size()-1] = res[res.size()-1]+1;
        nl
        for(auto x:res) 
            cout<<x<<" ";
        nl
        for(int i=res.size()-1;i>=0;i--){
            if(res[i]>9){
                res[i] = 0;
                res[i-1] +=1;
            }else{
                break;
            }
        }
        for(auto x:res) 
            cout<<x<<" ";
        return res;
    }
    
int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    vector<int> vec= {9};
    plusOne(vec);


    return 0;

}