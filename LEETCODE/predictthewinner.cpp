#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
 bool PredictTheWinner(vector<int>& nums) {
        int n= nums.size();
        int sc_pl1 = 0,sc_pl2 =0;
        bool turn_pl1 = true,turn_pl2 = false;
        for(int i=0;i<n;i++){
            if(turn_pl1){
                if(nums[0]<nums[nums.size()-1]){
                    sc_pl1 += nums[nums.size()-1];
                    nums.pop_back();
                }else{
                    sc_pl1 += nums[0];
                    nums.pop_front();
                }
                
                turn_pl1 = false;
                turn_pl2 = true;
                
            }
            if(turn_pl2){
                if(nums[0]<nums[nums.size()-1]){
                    sc_pl2 += nums[nums.size()-1];
                }else{
                    sc_pl2 += nums[0];
                }                
                turn_pl1 = true;
                turn_pl2 = false;
            }
        }
        cout<<"sc_pl1:"<<sc_pl1<<endl;
        cout<<"sc_pl2:"<<sc_pl2<<endl;
        return sc_pl1>=sc_pl2 ? true :false;

 }
int main()
{
    vector<int> vec = {1,5,2};
    cout<<PredictTheWinner(vec);
   

   return 0;

}