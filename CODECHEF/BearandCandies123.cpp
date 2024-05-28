#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int a,b,bob=0,limak=0;
        int counter= 0;
        cin>>a>>b;
        while (limak<=a && bob <= b){
            counter+=1;
            limak+=counter;
            counter+=1;
            bob+=counter;

        }

        if (limak>a && bob>b){
            cout<<"Bob"<<endl;

        }else if (limak>a){
            cout<<"Bob"<<endl;
        }else{
            cout<<"Limak"<<endl;
        }
    }


}