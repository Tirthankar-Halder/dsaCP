#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    
    while(t--){
        long long n,k,b=0,i,flag=0;
        cin>>n>>k;
        int a[n];
        while(b<n){
            cin>>a[b];
            b++;
        }
        for(i=0;i<n;i++){
            cout<<a[i]<<endl;
            if (a[i]<k){
                cout<<"NO"<<i ;
                flag = 1;
                break;

            }
            if (i< n-2){
                
                a[i+1] += (a[i]-k);
            //cout<<i;
            }
            
            
            
        }
        // cout<<i<<n;
        if (flag==0){
            cout<<"YES";
        }
        
    }
        
}