#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;     
    int flag =0;
    while(t--){
        long long a,b,x,y;
        cin>>a>>b>>x>>y;
        
        if (a==x || a==y){
            flag++;
            if (b==x || b==y){
                flag++;
            }
        }
    }
    cout<<flag;
    return 0;

}