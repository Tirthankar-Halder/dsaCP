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

    int m=2,n=3;
    vector<vector<int>> vect(m*n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            vect[i][j] = 0;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<vect[i][j]<<" ";
        }
        nl
    }

    return 0;

}