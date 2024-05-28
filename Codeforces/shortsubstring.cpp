#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;

int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int count=0;
        string s,res=" ";
        cin>>s;
        for(int i=0;i<s.length();i++){
            // cout<<i<<endl;
            if(s[i] == s[i+1]){
                res+=s[i];
                count++;
                i++;

            }else{
                res+=s[i];
            }
        }
        if(count==s.length()/2){
            res+=s[0];
        }
        cout<<res<<endl;
    }


    return 0;

}