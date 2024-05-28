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
    bool flag =0;
    long long n;
    cin>>n;
    while(n !=0){
        if(n%10 != 4 || n%10 !=7){
            flag =1;
            break;
        }
        cout<<n<<endl;
        n=n/10;
    }
    flag==1?cout<<"NO":cout<<"YES";


    return 0;

}