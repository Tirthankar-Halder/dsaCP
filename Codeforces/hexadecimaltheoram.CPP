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
    int n,num=0,i=2;
    cin>>n;
    // cout<<n;
    vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);
    if(n==0){
        cout<<fib[n]<<" "<<fib[n]<<" "<<fib[n];
        return 0;
    }else if(n==1){
        cout<<fib[n-1]<<" "<<fib[n-1]<<" "<<fib[n];
        return 0;
    }
    
    while(fib[i-1]+fib[i-2] != n){
        fib.push_back(fib[i-1]+fib[i-2]);
        i++;
    }
    if(n==2){
        cout<<fib[i-1]<<" "<<fib[i-2]<<" "<<fib[i-3];
        
    }else{
        cout<<fib[i-1]<<" "<<fib[i-3]<<" "<<fib[i-4];
    }
    


    return 0;

}