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
        int n,i;cin>>n;
        string s;
        cin>>s;
        set<char> distinctEle;
        bool flag = true;
        for(i=0;i<n;i++){
            // cout<<s[i]<<" ";
            if(s[i]!=s[i+1]){
                if(distinctEle.find(s[i]) != distinctEle.end()){
                flag =false;
                break;
                
                }else{
                    distinctEle.insert(s[i]);
                }
            }
            // for(auto x:distinctEle){
            // cout<<x<<" ";
            // }
            // nl
            
            
        }
        
        flag ==false?cout<<"NO"<<endl:cout<<"YES"<<endl;
        distinctEle.clear();
    }


    return 0;

}