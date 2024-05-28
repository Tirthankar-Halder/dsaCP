#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
/*
Problem Statement:
we have to choose min coins required to make an amount from a coin bucket

*/
int solve(int x,vector<int> coins){//recusive solution
    if(x<0) return INT_MAX;
    if(x==0) return 0;
    int best = INT_MAX;
    for(auto c:coins){
        cout<<best<<endl;
        best = min(best,solve(x-c,coins)+1);

    }
    return best;
}
int solveDP(int x,vector<int> coins,int ready[],int value[]){//DP solution
    if(x<0) return 9999999;
    if(x==0) return 0;
    // cout<<ready[x];
    if(ready[x] == 1) 
        return value[x];//checking if value of x is lready is calculated or not
    int best =9999999;
    for(auto c:coins){
        best = min(best,solveDP(x-c,coins,ready,value)+1);

    }
    ready[x] = 1;//if not present then assign the calculated value for x
    value[x] = best;//assigning the value
    return value[x];
}
int main()
{

    int n=10;
    int ready[n+1];
    int value[n+1];
    memset(ready,0,sizeof(ready));
    
    vector<int> vec={1,2,4};
    // cout<<solve(1,vec);
    cout<<solveDP(n,vec,ready,value);


    return 0;

}