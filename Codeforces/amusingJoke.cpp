#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
string amusingjoke(string name,string host,string mix){
    // int i=0,j=0,k=0;
    // while(i<mix.length()){
    //     if(mix[i] == name[j]){
    //         i++;
    //         j++;
    //     }else{
    //         i++;
    //     }
    // }
    // cout<<j<<endl;
    // i=0;
    // while(i<mix.length()){
    //     if(mix[i] == host[k]){
    //         i++;
    //         k++;
    //     }else{
    //         i++;
    //     }
    // }
    // cout<<k<<endl;
    // if(j==name.length() && k==host.length()){
    //     return "YES";
    // }else{
    //     return "NO";
    // }
    bool flag =true;
    int freeq[26];
    memset(freeq, 0, sizeof(freeq));
    // cout<<mix[0]-'A';
    // for(auto x:freeq){
    //     cout<<x<<" ";
    // }
    for(int i=0;i<mix.length();i++){
        freeq[mix[i]-'A']++;
        
    }
    
    for(int i=0;i<name.length();i++){
        freeq[name[i]-'A']--;
    }
    for(int i=0;i<host.length();i++){
        freeq[host[i]-'A']--;
    }
    for(int i=0;i<26;i++){
        // cout<<freeq[i]<<" ";
        if(freeq[i] != 0){
            // cout<<freeq[i];
            flag = false;
        }
    }
    return flag?"YES":"NO";

}
int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    cout<<amusingjoke(s1,s2,s3);


    return 0;

}