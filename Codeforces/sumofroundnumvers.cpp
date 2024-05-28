#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    long long t;
    cin>>t;
    while(t--){
        long long n,i=1,count =0 ;
        vector<int> v;
        cin>>n;
        while(n!=0){
            if (n%10 != 0){
                v.push_back((n%10)*i);
                
                count++;
            }
            n = n/10; 
            i = i*10;
        }
        cout<<count<<endl;
        for (auto x:v){
            cout<<x<<" ";
        }
    }

    

    return 0;

}