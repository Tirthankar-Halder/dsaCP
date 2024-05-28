#include<bits/stdc++.h>
using namespace std;
// class Solution {//my method
// public:
//     int removeDuplicates(vector<int>& nums) {
//         if (nums.size()>1){
//             int count = 0,pos_track = 1;

//         for(int i =0;i<nums.size();i++){

//             if (nums[i]!=nums[i+1]){
//                 nums[pos_track]=nums[i+1];
//                 pos_track++;
//                 count++;
//             }

//         }
//         return count;
//         }else{
//             return 1;
//         }
        
        
//     }
// };
class Solution {//usingt hashset
public:
    int removeDuplicates(vector<int>& nums) {
        set < int > h;
        for(auto i:nums){
            h.insert(i);

        }
        nums.clear();
        for(auto i:h){
            nums.push_back(i);

        }
        for(auto i:nums){
            cout<<i<<;
        }
        return nums.size();
    
};
int main(){

   
    Solution s;
    // vector<int> x = {1,1};
    vector<int> x = {0,0,1,1,1,2,2,3,3,4};
    cout<<s.removeDuplicates(x);
   
    return 0;

}