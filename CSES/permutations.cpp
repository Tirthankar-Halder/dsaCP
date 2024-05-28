#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
void permuations(int n){
    int arr[n];
    // if(n<=3){
    //     cout<<"NO SOLUTION";
    // }else{
        
    // }
    for(int i=0;i<n;i++){
            arr[i] =i+1;
        }
        int i=0;
        int j=3;
        while(i+j<n){
            
            swap(arr[i],arr[i+j]);
             i +=2;
            if(i+j>n-1){
                j--;
            }
        }
        // cout<<endl;
        bool flag = false;
        for(int i =0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1]) >=2 || abs(arr[i+1]-arr[i])>=2){
                flag =true;
            }
        }
        if(flag){
            for(auto x:arr){
            cout<<x<<" ";
            }
        }else{
            cout<<"NO SOLUTION";
        }
        
}
int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    
    permuations(n);
    
    

    return 0;

}