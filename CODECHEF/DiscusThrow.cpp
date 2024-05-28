#include<iostream>
#include<stack>
using namespace std;
int main(){
    int t;
    cin >> t;
    int out=0;
    int a,b,c;
    while(t--){
        cin>>a>>b>>c;
        if (a>b && a>c){
            out = a;
        }
        else if (b>c && b>a){
            out = b;
        }
        else if (c>a && c>b){
            out=c;
        }
        else{
            out=c;

        }
        cout<<out<<"\n";

    }

}