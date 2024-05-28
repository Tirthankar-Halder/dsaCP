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
    int k,l,m,n,d,i;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    vector<int> nums;
    set<int> damaged;
    for(int i=0;i<d;i++){
        nums.push_back(i+1);
    }
    i=k;
    while(i<=d){
        damaged.insert(nums[i-1]);
        i+=k;
    }
    // cout<<damaged.size()<<endl;
    i=l;
    while(i<=d){
        damaged.insert(nums[i-1]);
        i+=l;
    }
    // cout<<damaged.size()<<endl;
    i=m;
    while(i<=d){
        damaged.insert(nums[i-1]);
        i+=m;
    }
    // cout<<damaged.size()<<endl;
    i=n;
    while(i<=d){
        damaged.insert(nums[i-1]);
        i+=n;
    }
    cout<<damaged.size()<<endl;


    return 0;

}