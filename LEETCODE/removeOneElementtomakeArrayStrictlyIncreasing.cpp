#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
bool canBeIncreasing(vector<int>nums) {
    for(int a=0;a<nums.size();a++){
            cout<<nums[a]<<" ";
    }
    int count=0,i=0,j=0;
    if(nums.size() ==2){
        return true;
    }
    bool flag;
    for(int i=0;i<nums.size();i++){
        flag= false;
        vector<int> tempVec(nums.size());
        for(int j=0;j<nums.size();j++){
            tempVec[j] = nums[j];
        }
        tempVec.erase(tempVec.begin()+i);
        for(int a=0;a<tempVec.size();a++){
            cout<<tempVec[a]<<" ";
        }
        for(int k=0;k<nums.size()-1;k++){
            if(tempVec[k]>tempVec[k+1]){
                flag =false;
                break;
            }
            flag =true;
        }
        tempVec.clear();
        
    }
    if(flag)
        return true;
    else
        return false;
    
}
int main()
{

    // #ifndef ONLINE_JUDGE
    //    freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    // #endif
    vector<int>nums = {2,3,1,2};
    // canBeIncreasing(nums);
    for(int a=0;a<nums.size();a++){
            cout<<nums[a]<<" ";
    }
    int count=0,i=0,j=0;
    if(nums.size() ==2){
        return true;
    }
    bool flag;
    for(int i=0;i<nums.size();i++){
        flag= true;
        vector<int> tempVec(nums.size());
        for(int j=0;j<nums.size();j++){
            tempVec[j] = nums[j];
        }
        tempVec.erase(tempVec.begin()+i);
        nl
        for(int a=0;a<tempVec.size();a++){
            cout<<tempVec[a]<<" ";
        }
        for(int k=0;k<nums.size()-2;k++){
            if(tempVec[k]>=tempVec[k+1]){
                flag =false;
                break;
            }
        }
        if(flag)
            break;
        tempVec.clear();
        
    }
    nl
    if(flag)
        cout<<1;
    else
        cout<<0;
    
    return 0;

}