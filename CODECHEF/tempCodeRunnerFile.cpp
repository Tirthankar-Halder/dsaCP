#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long b,w,p,h;
        int n,flag = 0;
        cin>>n>>b;
        while(n--){
            
            cin>>w>>h>>p;
            if (w >= h && b<=p){
                flag = 1;
                break;
                
            }
        }
        flag ==1 ? cout<<w*h<<endl : cout<<"no tablet"<<endl;
    }

    return 0;

}