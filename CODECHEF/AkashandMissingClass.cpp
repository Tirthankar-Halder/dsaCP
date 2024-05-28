#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,out,extra;
        cin>>n;
        out = n/7;
        extra = n%7;
        out = out  + extra/6;

        cout<<out<<endl; 
    }
}