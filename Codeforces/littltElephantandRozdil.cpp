#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;

int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    vector<int> cities;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        cities.push_back(t);
    }
    if(cities.size()==1){
        cout<<1;
        return 0;
    }
    int currCity,flag=0;
    int xmin = *min_element(cities.begin(),cities.end());
    // cout<<xmin;
    for(int i=0;i<n;i++){
        if(cities[i] == xmin){
            flag++;
            currCity =i;

        }
    }
    if(flag ==1){
        cout<<currCity+1;
    }else{
        cout<<"Still Rozdil";
    }
    // int currCity=0,flag=0;
    // // cout<<currCity<<endl;
    // for(int i=0;i<n;i++){
    //     if(cities[currCity]>=cities[i]){
    //         if(cities[currCity] == cities[i]){
    //             currCity = i;
    //             flag++;
    //         }else{
    //             currCity=i;
    //             flag=0;
    //         }
    //         cout<<cities[currCity]<<endl;
    //     }
        
    // }
    // cout<<flag<<endl;
    




    return 0;

}