#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,flag=0,t_flag=0;
    cin>>n>>m;
    n+=1;
    while(t_flag==0){  
        flag=0;          
        for(int i = 2; i <= n/2; i++)  {  
            if(n % i == 0){  
                flag=1;  
                break;  
                }  
        }
        if(flag==0){
            break;
        }
        n+=1; 
    }
    if(n==m){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
     

    return 0;

}