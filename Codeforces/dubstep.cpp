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
    string s,d="WUB",res = " ";
    cin>>s;
    bool flag=false;
    int i=0;
    while(i<s.length()){
        if(s[i] ==d[0] && s[i+1] ==d[1] && s[i+2] ==d[2] ){
            i=i+3;
            if(flag)
                res+=" ";

            flag=false;
        }else{
            res+=s[i];
            flag=true;
            i++;
        }
        // cout<<res<<" "<<i<<endl;
    }
    cout<<res;


    return 0;

}