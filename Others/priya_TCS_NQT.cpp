#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
/*
123
12
13
1
23
2
3
*/
void printVec(vector<char> &v){
    for(char ch:v){
        cout<<ch;
    }
}
int calculateSum(vector<char>&v,vector<int>&num){
    int count=0;
    for (int i = 0; i < v.size(); i++)
    {
        count+=num[v[i]-'0'];
    }
    return count;
    
}
void subSequentGen(int k,string str,vector<char> &v,vector<int>&num,vector<int> &sumNum){
    if(k==str.length()){
        // printVec(v);
        sumNum.push_back(calculateSum(v,num));
        cout<<endl;
    }else{
        // include k in the subset
        v.push_back(str[k]);
        subSequentGen(k+1,str,v,num,sumNum);
        v.pop_back();
        // Don't include k in the subset
        subSequentGen(k+1,str,v,num,sumNum);

    }
}
int main()
{
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    vector<int> num(n);
    string str = " ";
    for (int i = 0; i < n; i++)
    {
        cin>>num[i];
        str+=to_string(i);
    }
    
    // cout<<str;
    vector<char> subset;
    vector<int>sumNum;
    int res=0;
    
    subSequentGen(0,str,subset,num,sumNum);
    for(auto x:sumNum){

        cout<<x;
    }
    cout<<res;
   return 0;

}