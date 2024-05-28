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
    int t;
    cin>>t;
    while (t--)
    {
        int n,count=0;
        cin>>n;
        if(n%2050==0){
            if((n/2050)%10==0){
                count++;
            }else{
                count = n/2050;
            }
            cout<<count<<endl;

        }else{
            cout<<-1<<endl;
        }
    }
    


    return 0;

}