#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
vector<vector<int>> func(int rows){
    vector<vector<int>> res;
    for(int i=0;i<rows;i++){
        // cout<<"i: "<<i<<endl;
        vector<int> temp;
        for(int j=0;j<=i;j++){
            // cout<<j;
            
            if(j==0 || j==i){
                temp.push_back(1);
            }
            else{
                // cout<<res[i-1][j-1]<<" "<<res[i-1][j];
                // nl
                temp.push_back(res[i-1][j-1]+res[i-1][j]);
            }
        }
        // for(auto x:temp){
        //     cout<<x<<" ";
        // }
        // nl
        res.push_back(temp);
    }
    return res;
}
int main()
{

//    #ifndef ONLINE_JUDGE
//        freopen("input.txt", "r", stdin);
//        freopen("output.txt", "w", stdout);
//     #endif
    int n=5;
    // cin>>n;
    func(n);
    

    


    return 0;

}