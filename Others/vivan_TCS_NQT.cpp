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
    int n;
    cin>>n;
    unordered_map<int,int> points;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        points.insert(make_pair(a,b));


    }
    set<int> distance;
    for(auto x:points){
        distance.insert(sqrt())
    }
    
    


    return 0;

}