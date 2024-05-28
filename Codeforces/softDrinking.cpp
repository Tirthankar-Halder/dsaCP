#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
int softDrinking(int n, int k,int l,int c,int d,int p,int nl1,int np){
    int x;
    x =min({k*l/nl1,c*d,p/np})/n;
    return x;
}
int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int n, k, l, c, d, p, nl1, np;
    cin>>n;
    cin>>k;
    cin>>l;
    cin>>c;
    cin>>d;
    cin>>p;
    cin>>nl1;
    cin>>np;
    cout<<softDrinking(n, k, l, c, d, p, nl1, np);


    return 0;

}