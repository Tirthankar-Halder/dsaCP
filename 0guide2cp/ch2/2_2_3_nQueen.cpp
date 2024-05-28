#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
#define n 2
void search(int col[],int diag1[],int diag2[],int count,int y){
    if(y==n){
        count++;
        cout<<count;
        return ;
    }
    for(int x=0;x<n;x++){
        if(col[x] || diag1[x+y] || diag2[x-y+n-1]){
            continue;
        }
        col[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        search(col,diag1,diag2,count,y+1);
        col[x] = diag1[x+y] = diag2[x-y+n-1] =0;
    }  
    
}
int main()
{

//    #ifndef ONLINE_JUDGE
//        freopen("input.txt", "r", stdin);
//        freopen("output.txt", "w", stdout);
//     #endif
    int col[n+1],diag1[n+1],diag2[n+1];
    for(int i=0;i<n;i++){
        col[i] = 0;
        diag1[i] = 0;
        diag2[i] = 0;
    }
    int count=0;
    search(col,diag1,diag2,count,0);


    return 0;

}