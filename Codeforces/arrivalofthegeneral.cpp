#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);

    }
    int max=INT_MIN,min=INT_MAX,max_flag=0,min_flag=0;
    for(int i=0;i<n;i++){
        if (max < v[i]){
            max = v[i];
            max_flag = i;

        }
        if (min >= v[i] ){
            min = v[i];
            min_flag = i;
        }
    }
    if (min_flag>max_flag){
        cout<<max_flag+(n-1-min_flag);

    }else{
        cout<<max_flag+(n-1-min_flag)-1;

    }

    return 0;

}