#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
int arithmeticTriplets(vector<int>& nums, int diff) {
    int count=0,no_triplet=0,num_dif;
    vector<int> triplet;
    bool flag = false;
    for(int i=0;i<nums.size();i++) {
        num_dif = nums[i];
        for(int j=0;j<nums.size();j++){
            if(abs(num_dif-nums[j]) == diff){
                num_dif = nums[j];
                nums.push_back(j);
                count++;
                if(count==2){
                    no_triplet++;
                    count = 0;
                    break;
                    // flag = true;
                }
            }

        }
        // if(flag){
        //     break;
        // }
    }
    return no_triplet;
}
int main()
{

//    #ifndef ONLINE_JUDGE
//        freopen("input.txt", "r", stdin);
//        freopen("output.txt", "w", stdout);
//     #endif
    vector<int> num = {0,1,4,6,7,10};
    int di = 3;
    cout<<arithmeticTriplets(num,di);

    return 0;

}