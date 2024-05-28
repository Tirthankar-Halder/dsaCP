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
    int n;
    cin>>n;
    vector<int> container_5;
    vector<int> container_0;
    for(long long i=0;i<n;i++){
        int num;
        cin>>num;
        if(num==0){
            container_0.push_back(num);

        }else{
            container_5.push_back(num);
        }
        
    }
    bool flag = true;
    int siZ = container_5.size();
    while(siZ!=0){
        if((siZ*5)%9==0){
            flag=true;
            break;

        }else{
            siZ--;
            flag = false;
        }
        
    }
    if(siZ ==0 && container_0.size()>0){
        cout<<0;
        return 0;
    }else if(siZ ==0 && flag==false){
        cout<<-1;
        return 0;
    }
    string digit=" ";
    long long  multi=1;
    
    for(int i=0;i<siZ;i++){
        
        digit+="5";

    }
    for(int i=0;i<container_0.size();i++){
        digit+="0";

    }
    cout<<digit;


    return 0;

}