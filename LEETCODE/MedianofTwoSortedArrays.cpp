#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums1);
        res.insert(res.begin(),nums2.begin(),nums2.end());
        sort(res.begin(),res.end());
        if (res.size()%2==0){
            // cout<<res[res.size()/2];
            // cout<<res[res.size()/2-1];
            double med = double((res[res.size()/2]+res[(res.size()/2)-1]))/2;
            return med;
            
        }else{
            
            return res[res.size()/2];
            
        }
        // for (auto i:res){
        //     cout<<i;
        // }
    }
};
int main(){
    Solution s;
    
    vector<int> x = { 1, 2 };
    vector<int> y = { 3,4 };
    cout<<s.findMedianSortedArrays(x,y);
}