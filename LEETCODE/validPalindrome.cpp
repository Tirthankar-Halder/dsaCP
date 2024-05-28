#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;

int main()
{
    string s = "v' 5:UxU:5 v'";
    string str = "";
    int i=0,j=s.length()-1;
    while(i<j){
        cout<<s[i]<<s[j];
        nl
        cout<<isalpha(s[i])<<" "<<isdigit(s[i]);
        nl
        if((isalpha(s[i]) || isdigit(s[i]) ) && (isalpha(s[j])) || isdigit(s[j])){
            if(tolower(s[i]) != tolower(s[j])){
                cout<<0;
                break;
            }
            i++;
            j--;
        }else{
            if(!isalpha(s[i]) && !isdigit(s[i])){
                i++;
            }
            cout<<!isalpha(s[j])<<" "<<isdigit(s[j]);
            nl
            if(!isalpha(s[j]) && !isdigit(s[j])){
                j--;
            }
        }
        
    }
//         for(int i=0;i<s.length();i++){
//             if(to)
//             if(isalpha(s[i])){
//                 s+=tolower(s[i]);
//             }
//         }
//         string temp =s;
//         for(int i=0;i<temp.length()/2;i++){
        
//             swap(temp[i],temp[temp.length()-i-1]);
//         }
    // if(str == s){
    //     return true;
    // }else{
    //     return false;
    // }
    cout<< 1;
    


    return 0;

}