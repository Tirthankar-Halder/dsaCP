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
    int n,p,q,x,y;
    cin>>n;
    cin>>p;
    // cout<<p;
    set<int> levelG;
    for(int i=0;i<p;i++){
        cin>>x;
        levelG.insert(x);
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>y;
        levelG.insert(y);
    }
    // for(auto x:levelG){
    //     cout<<x<<" ";
    // }
    levelG.size() >= n?cout<<"I become the guy.":cout<<"Oh, my keyboard!";


    return 0;

}