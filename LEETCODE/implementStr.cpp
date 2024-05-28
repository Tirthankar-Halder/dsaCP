#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
int strStr(string haystack, string needle) {
        
        int i = 0;
        int j = 0;
        vector<int> pos;
        while(i<haystack.length()){
            if(haystack[i] == needle[j]){
                i++;
                j++;
                
            }else{
                i++;
                j=0;
                
            }
            // cout<<j<<endl;
            // if(j==needle.length()){
            //     break;
            // }
            
        }
        // cout<<j;
        if(j==needle.length()){
                return i-needle.length();
            }else{
                return -1;
            }
            
        }
int main()
{

   cout<<strStr("mississippi","issipi");

   return 0;

}