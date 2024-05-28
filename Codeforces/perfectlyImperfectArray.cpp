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
    bool sq[10005];
    for(int i=1;i*i<=10000;i++) sq[i*i] =1;

    int t;
    cin>>t;
    while(t--){
        int n;
        bool ok =1;
        cin>>n;
        while (n--)
        {
            int a;
            cin>>a;
            ok&=sq[a];
        }
        puts(ok?"No":"Yes");
        
    }


}