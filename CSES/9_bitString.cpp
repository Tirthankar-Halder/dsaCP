#include<bits/stdc++.h>
#include <chrono>    

using namespace std;
#define ln "\n"
#define nl cout<<ln;
#define TIMER
//naive
// string bitRepresent(long long n,long long num){
//     long long remainder;
//     string bit = "";
//     long long i=0;
//     long long binary[n+1];
//     for(long long k= 0;k<n+1;k++){
//         binary[k] =0;
//     }
//     while(num != 0){
//         remainder = num%2;
//         binary[i] = remainder;
//         // bit = bit + to_string(remainder);
//         num = num/2;
//         i++;

//     }
//     long long count =0;
//     for(long long j = n-1;j>=0;j--){
//         bit += to_string(binary[j]);
//         count++;

//     }
//     return bit;
// }
int main()
{
    #ifdef TIMER
    auto start = chrono::high_resolution_clock::now();
    #endif
   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    long long n;
    cin>>n;
    //naive
    // // cout<<bitRepresent(n);
    // long long count=0;
    // for(long long i=0;i<pow(2,n);i++){
    //     bitRepresent(n,i);
    //     count++;
    // }
    // cout<<count;
    int mod = 1e9 + 7;
    long long ans = 1;
    for(int i=0;i<n;i++){
        ans = ans<<1;
        ans =ans%mod;
    }
    cout<<ans;
    
    #ifdef TIMER
    auto stop = chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Execution time: " << duration.count() << " microseconds" << endl;
    #endif

    return 0;

}