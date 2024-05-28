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
    int ht_p,ht_r;
    cin>>ht_p;
    cin>>ht_r;
    vector<vector<int>> vec;
    for(int i=0;i<ht_r;i++){
        vector<int> temp;
        for(int j=0;j<2;j++){
            int u;
            cin>>u;
            temp.push_back(u);
        }
        vec.push_back(temp);
    }
    int currHt_p=1,currHt_r;
    for(int i=0;i<ht_r-1;i++){
    
        if(vec[i][0]==vec[i+1][0]){
            currHt_p++;

        }
        
    }
    cout<<currHt_p<<endl;
    for(int i=0;i<ht_r;i++){
        for(int j=0;j<2;j++){
            cout<<vec[i][j]<<" ";
        }
        nl
    }


    return 0;

}