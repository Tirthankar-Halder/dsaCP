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
    while(t--){
        int w,h,n,curPieceCount=1;
        cin>>w>>h>>n;
        while (w % 2 == 0) {
            w /= 2;
            curPieceCount *= 2;
        }
        while (h % 2 == 0) {
            h /= 2;
            curPieceCount *= 2;
        }
        // cout<<curPieceCount<<endl;
        curPieceCount>=n?cout<<"YES"<<endl:cout<<"NO"<<endl;

    }


    return 0;

}