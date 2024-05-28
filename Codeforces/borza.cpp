#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j=0;
    string str;
    cin>>str;
    for (int i=0;i<str.length();i++){
        if (str[j] == '-' && str[j+1] == '-' ){
            cout<<2;
            j+=2;
        }else if (str[j] == '-' && str[j+1] == '.' ){
            cout<<1;
            j+=2;

        }else if (str[j] == '.'){
            cout<<0;
            j++;
        }
        
    }
    
    
    return 0;

}