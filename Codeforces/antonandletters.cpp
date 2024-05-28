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
    string s,z;
    while (true)
    {
      cin>>z;
      s+=z;
      if(cin.peek()=='\n')
        break;
    }
    // cout<<s;
    set<char> distinct_char;
    for(int i=0;i<s.length();i++){
        // cout<<s[i]<<endl;
        if(s[i] != '{' && s[i] != '}' && s[i] != ','){
            // cout<<s[i]<<endl;
            distinct_char.insert(s[i]);
        }
    }
    cout<<distinct_char.size();


    return 0;

}