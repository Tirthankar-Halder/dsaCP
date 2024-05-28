#include<bits/stdc++.h>
#include<complex>
#include<queue>
#include<set>
#include<unordered_set>
#include<list>
#include<chrono>
#include<random>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include<unordered_map>
#include<stack>
#include<iomanip>
#include<fstream>
 
using namespace std;

int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
   #endif
    int n,e,p,b,no_mo=0;
    cin>>n;
    cin>>e;
    vector<pair<int,int>> power_b;
    vector<int> power;
    vector<int> bonus;
    for(int i = 0;i<n;i++){
        cin>>p;
        power.push_back(p);;
    }for(int i = 0;i<n;i++){
        cin>>b;
        bonus.push_back(b);;
    }
    for(int i = 0;i<n;i++){
        power_b.push_back(make_pair(power[i],bonus[i]));;
    }
    sort(power_b.begin(),power_b.end());
    for(int i = 0;i<n;i++){
        if(e>=power_b[i].first){
            no_mo++;
            e+=power_b[i].second;
        }
    }
    cout<<no_mo;
   return 0;

}