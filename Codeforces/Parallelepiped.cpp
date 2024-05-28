#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int a,b,c,s1,s2,s3;
    cin>>s1>>s2>>s3;
    cout<<4*(sqrt((s1*s3)/s2)+sqrt((s2*s3)/s1)+sqrt((s1*s2)/s3));


    return 0;

}