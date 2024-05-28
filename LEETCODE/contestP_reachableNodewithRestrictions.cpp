#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;

void reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
    set<int>edge;

    for(int i=0;i<edges.size();i++)  {
        cout<<edges[i][0]<<" "<<edges[i][1]<<endl;
        for(int j=0;j<restricted.size();j++){
            cout<<restricted[j]<<endl;
            if(edges[i][0] !=restricted[j] && edges[i][1] != restricted[j]){
                edge.insert(edges[i][0]);
                edge.insert(edges[i][1]);
            }else{
                break;
            }
        }
        cout<<edge.size()<<endl;
        
    } 
    
    
}
int main()
{

//    #ifndef ONLINE_JUDGE
//        freopen("input.txt", "r", stdin);
//        freopen("output.txt", "w", stdout);
//     #endif
    vector<vector<int>> edge= { {0,1},{1,2},{3,1},{4,0},{0,5},{5,6}};
    vector<int> res = {4,5};

    int n=7;
    reachableNodes(n,edge,res);

    return 0;

}