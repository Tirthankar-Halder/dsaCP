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
void subSequentGen(int k,string str,vector<char> &v){
    if(k==str.length()){
        printVec(v);
        cout<<endl;
    }else{
        // include k in the subset
        v.push_back(str[k]);
        subSequentGen(k+1,str,v);
        v.pop_back();
        // Don't include k in the subset
        subSequentGen(k+1,str,v);

    }
}
int main()
{
    string str = "012";
    vector<char> subset;
    subSequentGen(0,str,subset);
   

   return 0;

}