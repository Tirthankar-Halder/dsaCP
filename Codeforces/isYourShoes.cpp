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
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    set<int> shoe;
    shoe.insert(s1);
    shoe.insert(s2);
    shoe.insert(s3);
    shoe.insert(s4);
    cout<<4-shoe.size();


    return 0;

}