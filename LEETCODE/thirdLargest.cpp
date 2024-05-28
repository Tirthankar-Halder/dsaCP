#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
int thirdMax(vector<int>& nums) {
    unordered_set<int> three_max; 
        
    // three passes 
    for (int i=0;i<3;i++){ //O(3)*O(n)
    int max=INT_MIN;int flag=0;
        for(auto integer:nums){ //O(n)
            if(max<=integer && (three_max.count(integer)==0))
            {  max=integer;flag=1;}
        
        }if (flag)
        three_max.insert(max);//O(1)
        //if(max==INT_MIN && find(nums.begin(),nums.end()))
    }
    

    set<int> ordered(three_max.begin(),three_max.end()); // O(3*log(3)) == O(1)

    auto iterator=ordered.end();
    iterator--;
    if(ordered.size()<3) return *iterator;
    iterator--;iterator--;
    return *iterator;
        
}
int main()
{
    unordered_set<int> x;

    vector<int> nums = {1,1,2};
    int max=0,sMax=-1,tMax=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[max]){
                max = i;
            }
        }
        if(nums.size() == 2){
            cout<< nums[max];
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] != nums[max] ){
                if(sMax  ==-1){
                    sMax = i;
                }else if(nums[i] >=nums[sMax]){
                    sMax =i;
                }
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] != nums[sMax] && nums[i] != nums[max]){
                if(tMax  ==-1){
                    tMax = i;
                }else if(nums[i] >=nums[tMax]){
                    tMax =i;
                }
            }
        }
        cout<< nums[tMax];


    return 0;

}