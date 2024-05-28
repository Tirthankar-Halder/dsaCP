#include<bits/stdc++.h>
using namespace std;
int size(int n){

    if (n<3){
        return n;

    }else{
        size(n-1);
    }
}
int main()
{
    long long t;
    cin>>t;
    while(t--){

        string arr[3] = { "normal","huge","small"};

        int x,flag=0;
        cin>>x;
        // for(int i=0;i<x;i++){
        //     cout<<flag;
        //     flag+=1;
        //     if (flag>2){
        //         flag==0;
        //     }

        // }
        // cout<<arr[flag];

        cout<<arr[size(x)];

    }

    return 0;

}