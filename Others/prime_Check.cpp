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
    int n,sum =0,flag=0;
    cin>>n;
    if(n==1){
        cout<<"Not googly";
    }
    else{
        int k=n;
        while(k>0){
        sum+=k%10;
        k=k/10;
    }
    int m=sum/2;  
    for(int i = 2; i <= m; i++)  
    {  
        if(n % i == 0)  
        {  
            cout<<"Googly"<<endl;  
            flag=1;  
            break;  
        }  
    }  
  if (flag==0)  
      cout << "Not googly"<<endl;  }
  return 0;  


    return 0;

}