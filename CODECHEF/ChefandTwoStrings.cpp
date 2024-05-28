#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int max=0,min=0;

        string s1,s2;
        cin>>s1;
        cin>>s2;
        for (int i =0;i<s1.length();i++){
            if (s1[i]=='?' || s2[i] =='?'){
                max+=1;
            }else if (s1[i] != s2[i]){
                max+=1;
                min+=1;
            }
        }
        cout<<min<<max;
    }
}