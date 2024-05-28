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
   long long n;
    cin>>n;
    while(n !=1){
        cout<<n<<" ";
        if(n%2 == 0){
            n=n/2;
        }else{
            n = n*3+1;
        }
        
    }
    cout<<1;
   

   return 0;

}