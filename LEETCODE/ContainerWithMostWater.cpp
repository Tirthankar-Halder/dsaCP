#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
int maxArea(vector<int>& height) {
    int capacity = 0,i=0,j=height.size()-1;
        while(i<j){
            //capacity = min(height[i],height[j])*gap;
            capacity = max(capacity,min(height[i],height[j])*(j-i));
            // cout<<capacity<<endl;
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
            
        }
        return capacity;
    
}
int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int n=9,x;
    vector<int> vec;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    // for(auto x:vec)
    //     cout<<x;
    cout<<maxArea(vec);


    return 0;

}