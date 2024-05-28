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
    int t;
    cin>>t;
    while(t--){
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        if(a1>a2){
            if(b1>b2){
                if(a2>b1){
                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                }
            }else{
                if(b1>a1){
                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                }

            }
        }else{
            if(b1>b2){
                if(a2>b1){

                }else{
                    
                }
                if(b2>a2){
                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                }
            }else{
                if(a2>b2){

                }else{

                }
                if(b1>a2){

                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                }

            }

        }
    }


    return 0;

}