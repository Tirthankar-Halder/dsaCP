#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
int repeatations(string s){
    long long i = 0;
    long long max_rep = 0,repe = 0;
    if(s.length() == 1)
        return 1;
    while(i<s.length()-1){
        
        if(s[i]==s[i+1]){
            repe++;
        }else{
            // cout<<repe<<endl;
            repe = 0;
        }
        max_rep = max(max_rep,repe+1);

        i++;
    }
    return max_rep;

}
int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    string s ;
    cin>>s;
    cout<<repeatations(s);
    


   return 0;

}