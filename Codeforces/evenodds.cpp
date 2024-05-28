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
    long long n,k,even_num=2,odd_num = 1;
    cin>>n>>k;
    vector<long long> track_vec;
    
    long long count = 0,res=0;
    if(n%2==0){
        if(k>(n/2)){
            count+=(n/2);
            while(count != (k-1)){
                // cout<<count<<endl;
                count++;
                even_num+=2;
                
            }
            res= even_num;
            // cout<<res;


        }else{
            while(count !=(k-1)){
                count++;
                odd_num+=2;
                
                // cout<<res;
            }
            res = odd_num;
        }
    }else{
        if(k>(n/2)+1){
            count+=(n/2+1);
            while(count != (k-1)){
                count++;
                even_num+=2;
                

            }
            res= even_num;

        }else{
            while(count !=(k-1)){
                count++;
                odd_num+=2;
                
                // cout<<res;
            }
            res = odd_num;
        }
    }
    res == 0?cout<<1:cout<<res;


    return 0;

}