
#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
bool isValid(string s) {
        stack<char> temp;
        for(int i=0;i<s.length();i++){
            if(temp.empty()){
                temp.push(s[i]);
                
            }else if(temp.top() == '(' && s[i] == ')' || temp.top() == '{' && s[i] == '}' || temp.top() == '[' && s[i] == ']'){
                temp.pop();
            }
            else{
                temp.push(s[i]);
            }
            
            
        }
        if(temp.empty()){
                return true;
            }
        return false;
    }

int main()
{

   

   return 0;

}