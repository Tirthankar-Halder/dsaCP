#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
/*failed execution:
2 2 
1 2
*/
int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int time=0,n,m;
    cin>>n>>m;
    // cout<<m;
    vector<int> task;
    for(int i=0;i<m;i++)
    {
        int pos;
        cin>>pos;

        task.push_back(pos);
        // cout<<pos;
        // cout<<i;
    }
    // for(auto x:task){
    //     cout<<x;
    // }

    int i =0;
    while(i<m){
        if(i==0){
            time+=task[i]-1;
            i++;
        }else if(task[i] == task[i-1]){
            i++;
            continue;
        }
        else if(task[i]<n && task[i]>task[i-1]){
            time+=task[i]-task[i-1];
            i++;
        }else{
            time+=n-task[i-1];
            time+=1;
            time+=task[i]-1;
            i++;
        }

    }
    cout<<time;


    return 0;

}