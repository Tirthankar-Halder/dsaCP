#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;

int main()
{
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int>res;
    unordered_map<int,int> hashMap;
    for(int i=0;i<nums.size();i++){
        hashMap.insert(make_pair(nums[i],i));
        
    }
    for(int i=0;i<nums.size();++i){
        int complement = target-nums[i];
        if(hashMap.find(complement) !=hashMap.end() && complement != nums[i]){
            cout<<hashMap[complement]<<" "<<i;
            break;
        }
        hashMap[nums[i]] = i;
    }
    for(auto x:res){
        cout<<x<<" ";
    }
        
//         Tc:o(n^2)
    //     int sum =0;
    //     bool flag = true;
    //     vector<int> res;
    //     for(int i=0;i<nums.size();i++){
    //         // if(sum == target){
    //         //     break;
    //         // }
    //         // else if(sum<target){
    //         //     sum+=nums[i];
    //         //     res.push_back(i);
    //         // }
    //         for(int j=i+1;i<nums.size()-1;j++){
    //             if(nums[i]+nums[j] == target){
    //                 res.push_back(i);
    //                 res.push_back(j);
    //                 flag = false;
    //                 break;
    //              }
    //         }
    //         if(!flag){
    //             break;
    //         }
    //     }
    //     return res;


    return 0;

}