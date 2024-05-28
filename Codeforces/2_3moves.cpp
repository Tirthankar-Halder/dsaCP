#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
int moves(int n){
    // int count2=INT_MAX,count3=INT_MAX;
    int count2=0,count3=0;
    if(n==1){
        return 2;
    }
    // count3 = ceil(n/3);
    
    // if(n%2==0){
    //     count2 = ceil(n/2);
    // }
    
    // return min(count2,count3);
    // if(n==1){
    //     return 2;
    // }
    // if(n%3==0){
    //     count3 = ceil(n/3);
    // }
    // if(n%2==0){
    //     count2 = ceil(n/2);
    // }
    
    // return min(count2,count3);

//     while(n!=0){
//         // cout<<n<<endl;
//         if(n%3==0){
//             count3 = n/3;
//             n=n-count3*3;
//         }else if(n%2==0){
//             count2 = n/2;
//             n=n-count2*2;
//         }
//     }
//     return count2+count3;
// }
    
    if(n%3==0){
        count3 = n/3;
        n = n-count3*3;
    }
    if(n%2==0){
        count2 = n/2;
        n= n-count2*2;
    }
    if(count2 ==0 && count3==0){
        while(n<3){
            count3 = n/3;
            n=n-count3*3;
        }
        cout<<n<<endl;
        while(n<2){
            count3 = n/3;
            n=n-count3*3;
        }
        return count2+count3;
    }else{
        return count2+count3;
    }
}
int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<moves(n)<<endl;
    }


    return 0;

}