#include<bits/stdc++.h>
#include <cstring>  

using namespace std;

int main()
{
    string s,w;
    long long n;
    cin>>s;
    cin>>n;
    while(n--){
        int i = 0,j=0,res =0;
        cin>>w;
        while(i<s.length()){
            while(j<w.length()){
                if(w[j == s[i]]){
                    res = 1;
                    j++;
                    break;
                }else{
                    j++;
                    
                }
            
            }
            i++;
            if (res != 1){
                break;
            }
        }
        res ==1 ? cout<<"Yes"<<endl : cout<<"No"<<endl;
    
        
    }


    return 0;

}