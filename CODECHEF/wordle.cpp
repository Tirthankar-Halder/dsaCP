#include<iostream>
#include <string>

using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string s,T,out;
        cin>>s;
        cin>>T;
        for(int i=0;i<5;i++){
            if (s[i]==T[i]){
                out.push_back('G');
   
            }else{
                out.push_back('B');
            }

        }
        cout<<out<<endl;
        out.erase();

    }
    return 0;
}