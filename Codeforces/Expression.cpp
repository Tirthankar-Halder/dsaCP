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
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max({a+b*c,a*(b+c),a*b*c,(a+b)*c,a+b+c});


    return 0;

}