#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
string check(string s){
    for(int i=0;i<s.length();i++){
        if(s[i] == 'H'){
            return "YES";
          
        }else if(s[i] == 'Q'){
            return "YES";
      
        }else if(s[i] == '9'){
            return "YES";
        }
        // }else if(s[i] == '+'){
        //     return "YES";

        // }
    }
    return "NO";

}
int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    string s;
    cin>>s;
    
    cout<<check(s);


    return 0;

}