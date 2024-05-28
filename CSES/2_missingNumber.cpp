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
    int sum = (n*(n+1))/2;
    for(int i =0;i<n-1;i++){
        int num;
        cin>>num;
        sum-=num;
    }
    cout<<sum;
   

   return 0;

}