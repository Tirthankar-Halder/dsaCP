#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long b,w,p,h;
        int n,flag = 0;
        int area=0;

        cin>>n>>b;
        while(n--){
            cin>>w>>h>>p;
            

            if (p<=b && w*h>area){
                area = w*h;
                // cout<<"In IF"<<endl;
                flag = 1;
                
            }
            
        }
        flag ==1 ? cout<<area<<endl : cout<<"no tablet"<<endl;
    }

    return 0;

}