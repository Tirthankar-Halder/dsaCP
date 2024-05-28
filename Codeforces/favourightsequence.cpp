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
        int n;
        cin>>n;
        vector<int>polycarp;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            polycarp.push_back(num);

        }
        int i=0,j=polycarp.size()-1;
        vector<int> restored;
        while(i<=j){
            if(i==j){
                restored.push_back(polycarp[i]);
            }else{
                
                restored.push_back(polycarp[i]);
                restored.push_back(polycarp[j]);
            }
            
            
            i++;
            j--;
        }
        if(polycarp.size()==1){
            cout<<polycarp[0];
        }else{
            for(auto x:restored){
            cout<<x<<" ";
            }
        }
        nl
    }


    return 0;

}