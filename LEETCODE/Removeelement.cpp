#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElements(vector<int>& nums,int val) {
        vector < int > h;
        for(auto i:nums){
            if(i != val){
                h.push_back(i);
            }
        }
        nums.clear();
        for(auto i:h){
            nums.push_back(i);
            // cout<<i;

        }
        return nums.size();
    }
};
int main()
{

   Solution s;
    vector<int> x = {3,2,2,3};
    cout<<s.removeElements(x,3);

   return 0;

}