#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,z,time;
        cin>>x>>y>>z;
        time = z-(y/x);
        if (time<0){
            cout<<0;
        }else{
            cout<<time;
        }
    }

    return 0;

}