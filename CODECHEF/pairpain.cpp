#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,flag=0;
        vector<int> a;
        cin>>n;
        while(n--){
            cin>>x;
            a.push_back(x);
        }
        for(auto b:a){
            cout<<a;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i]<<" & "<<a[j];
                if (a[i]+a[j] >= a[i]*a[j]){
                    flag+=1;
                }
            }
        }
        cout<<flag<<endl;
    }

    return 0;

}