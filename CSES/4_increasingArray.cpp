#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;

long long increasingArray(long long arr[],long long arr_sz,long long moves){
    long long diff_val;

    
    for(int i=1;i<arr_sz;i++){
        diff_val = 0;
        if(arr[i]<arr[i-1]){
            diff_val = arr[i-1]-arr[i];
            arr[i] = arr[i] +diff_val;
            moves +=diff_val;
            // cout<<"Moves:"<<moves<<endl;
            // for(int i=0;i<arr_sz;i++){
            //     cout<<arr[i]<<" ";
            // }
            // cout<<endl;
        }
    }
    return moves;

}
int main()
{
    
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    long long arr_sz;
    cin>>arr_sz;
    long long arr[arr_sz],moves =0;
    for(int i=0;i<arr_sz;i++){
        cin>>arr[i];
    }
   
    cout<<increasingArray(arr,arr_sz,moves);

    
    


    // for(int i=0;i<arr_sz;i++){
    //     cout<<arr[i]<<" ";
    // }
    // nl
    // cout<<"Moves: "<<moves;
    // cout<<moves;
    
   

    return 0;

}