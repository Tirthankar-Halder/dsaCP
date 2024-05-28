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
    int t,n;
    cin>>t;
    while(t--){
        vector<int> x_pos;
        vector<int> y_pos;
        cin>>n;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x;
            cin>>y;
            x_pos.push_back(x);
            y_pos.push_back(y);
        }
        for(auto x:x_pos){
            cout<<x<<" ";
        }
        cout<<endl;
        for(auto x:y_pos){
            cout<<x<<" ";
        }
    }

    return 0;

}