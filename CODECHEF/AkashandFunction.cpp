#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,out=0;
        cin>>n;
        if (n==1){
            out= 1;
        }else{
            out = (n%2==0)?n/2:(n/2 +1);
        }
        cout<<out;
        
    }
}