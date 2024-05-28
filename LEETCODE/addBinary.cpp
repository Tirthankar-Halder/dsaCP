#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;

int main()
{
    string a= "1111",b="1111";
    int n,a_len = a.length()-1,b_len = b.length()-1;
    string str = "";
    char carry = '0';
    while(a_len>=0 && b_len>=0){
        if(a[a_len] == '1' && b[b_len] == '1'){
            if(carry == '1'){
                str = '1' + str;
                carry = '1';
            }else{
                str = '0'+str;
                carry = '1';
            }
            
            
            
        }else if((a[a_len] == '1' && b[b_len] == '0') || (a[a_len] == '0' && b[b_len] == '1')){
            if(carry == '1'){
                str = '0' + str;
            }else{
                str = '1' + str;
                carry = '0';
                
            }
            
        }else{
            if(carry == '1'){
                str = '1' + str;
                carry = '0';
            }else{
                str = '0' + str;
                
            }
        
        
        }
        a_len--;
        b_len--;
        if(carry == '1' && a_len==-1 && b_len == -1){
            str = carry+str;
        }
    }
    while(a_len>=0){
        if(a[a_len] == '1'){
            if(carry == '1'){
                str = '0' + str;
            }else{
                str = '1' + str;
        
            }
        }else{
            if(carry == '1'){
                str = '1' + str;
                carry = '0';
            }else{
                str = '0' + str;
                
            }
        }
        a_len--;
        if(carry == '1' && a_len == -1){
            str = carry+str;
        }
    }
    while(b_len>=0){
        if(b[b_len] == '1'){
            if(carry == '1'){
                str = '0' + str;
            }else{
                str = '1' + str;
        
            }
        }else{
            if(carry == '1'){
                str = '1' + str;
                carry = '0';
            }else{
                str = '0' + str;
                
            }
        }
        b_len--;
        if(carry == '1' && b_len == -1){
            str = carry+str;
        }
    }
    cout<< str;
    


    return 0;

}