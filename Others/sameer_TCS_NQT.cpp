#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
int checkStudent(vector<int> arr,int n){
    int count=0,flag=1,i=0;
    //     while(i<n){
    //         if(arr[i] != arr[i+1]){
    //             count++;
    //             flag = 0;
    //             i++ ;
    //         }else {
    //             if(flag == 0){
    //                 flag++;
    //                 count++;
    //             }
    //             i++;
    //         }
    //         cout<<arr[i]<<i<<" ";
    //     }
    // nl
    // cout<<count;
    
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] != arr[i+1]){
                count++;
                flag = 0;
        }else {
            if(flag == 0){
                flag++;
                count++;
            }
        }
    }
    return count;
    
}
int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int n,k;
    cin>>n>>k;
    vector<int> numStudent;
    vector<int> numList;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        numList.push_back(num);
    }
    map<int,int> reEval;
    for (int i = 0; i < k; i++)
    {
        int index,marks;
        cin>>index>>marks;
        // reEval[index] = marks;
        reEval.insert(make_pair(index,marks));
    }
    int studentCount;
    for(auto c:numList){
        cout<<c<<" ";
    }
    nl
    for (auto x:reEval)
    {
        numList[x.first-1] = x.second;
        for(auto c:numList){
        cout<<c<<" ";
        }
        nl
        studentCount = checkStudent(numList,n);
        numStudent.push_back(studentCount);
    }
    nl
    for(auto c:numStudent){
        cout<<c<<" ";
    }
    // checkStudent(numList,n);
    
    


    return 0;

}