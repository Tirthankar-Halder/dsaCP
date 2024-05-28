#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
/*
Problem Statement:
we have to count no ways we can make amount by choosing the coins from a coin bucket
*/
int solve(int x,vector<int> coins){//recusive solution
    if(x<0) return 0;
    if(x==0) return 1;
    int sum = 0;
    for(auto c:coins){
        sum += solve(x-c,coins);
        

    }
    return sum;
}
int solveDP(int x,vector<int> coins,int ready[],int value[]){//DP solution
    if(x<0) return 0;
    if(x==0) return 1;
    
    if(ready[x]==1) return value[x];
    int sum = 0;
    for(auto c:coins){
        sum += solveDP(x-c,coins,ready,value);

    }
    ready[x]= 1;
    //if not present then assign the calculated value for x
    value[x] = sum;//assigning the value
    return value[x];
}
int main()
{

    int n=50;
    int ready[n+1];
    int value[n+1];
    memset(ready,0,sizeof(ready));
    
    
    vector<int> vec={1,3,4};
    cout<<"By Normal Recusion: ";
    // cout<<solve(n,vec)<<endl;
    cout<<"By Dynamical programming: ";
    cout<<solveDP(n,vec,ready,value);


    return 0;

}