#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;

int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int freq[26];
        memset(freq,0,sizeof(freq));
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            for(int j=0;j<s.length();j++){
                freq[s[j]-'a']++;
            }

        }
        bool flag = false;
        for(int i=0;i<26;i++){
            // cout<<freq[i]<<endl;
            if(freq[i]%n!=0){
                // cout<<"NO"<<endl;
                flag=true;
                break;
            }
            
        }
        flag ?cout<<"NO"<<endl:cout<<"YES"<<endl;

    }


    return 0;

}