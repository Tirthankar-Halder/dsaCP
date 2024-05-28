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
        int n,k,p,noOpera=0,key,i,j;
        cin>>n>>k;
        vector<int> perm;
        for(int i=0;i<n;i++){
            cin>>p;
            perm.push_back(p);
        }
        for(i=0;i<k;i++){
            if(perm[i] != i+1){
                noOpera++;
                for(j=0;j<n;j++){
                    if(perm[j] == i+1){
                        break;
                    }
                }
                // key = find(perm.begin(),perm.end(),i+1);
                swap(perm[i],perm[j]);
            }
        }
        cout<<noOpera<<endl;
    }


    return 0;

}