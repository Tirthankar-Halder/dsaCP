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
    int n;
    cin>>n;
    set<char> distinct_num;
    n = n+1;
    while(true){
        string s = to_string(n);
        distinct_num.insert(s[0]);
        distinct_num.insert(s[1]);
        distinct_num.insert(s[2]);
        distinct_num.insert(s[3]);
        if(distinct_num.size()==4){
            break;
        }
        n++;
        
        distinct_num.clear();
    }
    // for(char c:distinct_num)
    //     cout<<c;
    cout<<n;


    return 0;

}