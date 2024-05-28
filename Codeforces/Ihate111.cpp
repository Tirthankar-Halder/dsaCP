#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
int func(int n){
    if(n==11 || n==111){
        cout<<"YES"<<endl;
    }else{
        if(n>111){
            func(n-111);
        }else{
            func(n-11);
        }
    }
}
int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    


    return 0;

}