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
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"YES"<<endl;
        }else{
            int checkNum = max(b/a,a/b);
            if(checkNum && (!(checkNum&(checkNum-1)))== true){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        
        }
    }


    return 0;

}